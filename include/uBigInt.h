#ifndef __U_BIG_INT__
#define __U_BIG_INT__

#include <iostream>
#include <cstring>
#include <cassert>
#include <sstream>
#include <iomanip>
#include <random>
#include <memory>

#include <gmpxx.h>
#include <string>
#include <vector>
#include <array>

template <size_t N> class uBigInt;

#ifdef DEBUG
#define DEBUG_U_BIG_INT uBigInt_dbg_t<N> _dbg(this, __PRETTY_FUNCTION__, __LINE__);
#else
#define DEBUG_U_BIG_INT
#endif

#ifdef DEBUG_U_BIG_INT
template <size_t N>
class uBigInt_dbg_t {
public:
    std::string _func;
    unsigned int _line;
    uBigInt<N> *outer;

    uBigInt_dbg_t(uBigInt<N> *o, std::string f, unsigned int l) : _func(f), _line(l), outer(o)  {
        printf("%s:%d Entry:\t\tthis=%p, ringSize=0x%s, val=0x%s\n", _func.c_str(), _line,
                outer, outer->ringSize.get_str(16).c_str(), outer->val.get_str(16).c_str());
    }
    ~uBigInt_dbg_t() {
        printf("%s:%d Exit :\t\tthis=%p, ringSize=0x%s, val=0x%s\n", _func.c_str(), _line,
                outer, outer->ringSize.get_str(16).c_str(), outer->val.get_str(16).c_str());
    }
};
#endif // _DEBUG_U_BIG_INT_T

template <size_t N>
class uBigInt
{
    static_assert(N>0, "uBigInt<N> not support N==0 case");
#ifdef DEBUG_U_BIG_INT
    friend class uBigInt_dbg_t<N>;
#endif

    template <size_t U>
    friend std::ostream& operator<<(std::ostream &s, const uBigInt<U> &n);
    template <size_t U>
    friend std::istream& operator>>(std::istream &s, uBigInt<U> &val);

private:
    const mpz_class ringSize;
    mpz_class val;

protected:

public:
    // static constexpr char MAX[] = { '1', [1 ... 2*N/8] = '0' };
    // static constexpr size_t BYTESIZE = N/8;  // C++14

    enum FORMAT {
        HEXSTR = 0,
        BINARY = 1,
    };
    enum ENDIAN {
        LSB = -1,   // Little endian
        NATIVE = 0, // Host native
        MSB = 1,    // Big endian
    };

    /* constructors */
    uBigInt()               : ringSize("0x1" + std::string(2*N/8, '0')), val(0) { DEBUG_U_BIG_INT }
    uBigInt(int l)          : ringSize("0x1" + std::string(2*N/8, '0')), val(l) { DEBUG_U_BIG_INT val %= ringSize; if (val<0) val+=ringSize; }
    uBigInt(long l)         : ringSize("0x1" + std::string(2*N/8, '0')), val(l) { DEBUG_U_BIG_INT val %= ringSize; if (val<0) val+=ringSize; }
    uBigInt(unsigned int l) : ringSize("0x1" + std::string(2*N/8, '0')), val(l) { DEBUG_U_BIG_INT val %= ringSize; }
    uBigInt(unsigned long l): ringSize("0x1" + std::string(2*N/8, '0')), val(l) { DEBUG_U_BIG_INT val %= ringSize; }
    // TODO signed/unsigned long long constructors
    uBigInt(const mpz_class& l) : ringSize("0x1" + std::string(2*N/8, '0')), val(l)    { DEBUG_U_BIG_INT val %= ringSize; if (val<0) val+=ringSize; }
    uBigInt(const uBigInt& l)   : ringSize("0x1" + std::string(2*N/8, '0')), val(l.val){ DEBUG_U_BIG_INT if (val<0) val+=ringSize; };
    uBigInt(const std::string& s) : ringSize("0x1" + std::string(2*N/8, '0'))   { DEBUG_U_BIG_INT FromHexString(s); } // throw
    uBigInt(const std::array<char,    N/8>& l) : ringSize("0x1" + std::string(2*N/8, '0')) { DEBUG_U_BIG_INT FromBytes(l.data(), N/8); }
    uBigInt(const std::array<uint8_t, N/8>& l) : ringSize("0x1" + std::string(2*N/8, '0')) { DEBUG_U_BIG_INT FromBytes(l.data(), N/8); }
    uBigInt(const std::vector<char>& v)    : ringSize("0x1" + std::string(2*N/8, '0')) { DEBUG_U_BIG_INT FromBytes(v.data(), v.size());}
    uBigInt(const std::vector<uint8_t>& v) : ringSize("0x1" + std::string(2*N/8, '0')) { DEBUG_U_BIG_INT FromBytes(v.data(), v.size());}
    uBigInt(const char* c, size_t len=N/8, FORMAT fmt=HEXSTR);
    uBigInt(const uint8_t l[N/8]) : ringSize("0x1" + std::string(2*N/8, '0')) { DEBUG_U_BIG_INT FromBytes(l, N/8); } // Not support fmt=HEXSTR for unsigned char*, since hexstr is ASCII scope

    /* assignment operators */
    const uBigInt& operator=(const char* c)         { FromHexString(c); DEBUG_U_BIG_INT return *this; } // throw
    const uBigInt& operator=(const std::string& s)  { FromHexString(s); DEBUG_U_BIG_INT return *this; } // throw
    const uBigInt& operator=(int l)                 { val= (mpz_class(l) % ringSize); if (val<0) val+=ringSize; return *this; }
    const uBigInt& operator=(long l)                { val= (mpz_class(l) % ringSize); if (val<0) val+=ringSize; return *this; }
    const uBigInt& operator=(unsigned int l)        { val= (mpz_class(l) % ringSize); return *this; }
    const uBigInt& operator=(unsigned long l)       { val= (mpz_class(l) % ringSize); return *this; }
    // TODO signed/unsigned long long assignment operators
    const uBigInt& operator=(const mpz_class& l)    { val=l;     val %= ringSize; if (val<0) val+=ringSize; DEBUG_U_BIG_INT return *this; }
    const uBigInt& operator=(const uBigInt& l)      { val=l.val; val %= ringSize; if (val<0) val+=ringSize; DEBUG_U_BIG_INT return *this; }

    /* unary increment/decrement operators */
    const uBigInt& operator++();
    const uBigInt& operator--();
    uBigInt operator++(int);
    uBigInt operator--(int);

    /* operational assignments */
    const uBigInt& operator+=(const uBigInt& rhs);
    const uBigInt& operator-=(const uBigInt& rhs);
    const uBigInt& operator*=(const uBigInt& rhs);
    const uBigInt& operator/=(const uBigInt& rhs); // throw
    const uBigInt& operator%=(const uBigInt& rhs); // throw
    // const uBigInt& operator*=(const mpz_class& rhs); //TODO

    /* operations */
    uBigInt operator-() const { return uBigInt(ringSize - val); }
    uBigInt operator+(const uBigInt& rhs) const { return uBigInt(val + rhs.val); }
    uBigInt operator-(const uBigInt& rhs) const { return uBigInt(val - rhs.val); }
    uBigInt operator*(const uBigInt& rhs) const { return uBigInt(val * rhs.val); }
    uBigInt operator/(const uBigInt& rhs) const { return uBigInt(val / rhs.val); } // throw
    uBigInt operator%(const uBigInt& rhs) const { return uBigInt(val % rhs.val); } // throw
    // uBigInt operator*(const mpz_class& rhs) const;  //TODO

    /* relational operations */
    bool operator==(const uBigInt& rhs) const { return val == rhs.val; }
    bool operator!=(const uBigInt& rhs) const { return val != rhs.val; }
    bool operator<(const uBigInt& rhs) const  { return val <  rhs.val; };
    bool operator<=(const uBigInt& rhs) const { return val <= rhs.val; };
    bool operator>(const uBigInt& rhs) const  { return val >  rhs.val; };
    bool operator>=(const uBigInt& rhs) const { return val >= rhs.val; };

    inline operator bool() const { return val != 0; }

    /* string conversion */
    bool FromHexString(const std::string& s);
    inline void FromBytes(const char* src,    size_t n = N/8, uBigInt::ENDIAN endian = uBigInt::MSB) {
        FromBytes(reinterpret_cast<const uint8_t*>(src), n, endian);
    }
    inline void FromBytes(const uint8_t* src, size_t n = N/8, uBigInt::ENDIAN endian = uBigInt::MSB) {
        mpz_import(val.get_mpz_t(), std::min<size_t>(n,N/8), endian, sizeof(uint8_t), 0/*endian?*/, 0, src);
    }
    std::string toString(int base=16) const;
    std::string toHexString() const;
    std::string toBytes(uBigInt::ENDIAN endian = uBigInt::MSB) const;

    /* Access Data buffer directly */
    inline const mpz_class& Value() const { return val; }
    // WARNING: access internal merber mpz_t._mp_d has no guarantee for compatibility in future or cross platform.
    // inline void* _DataPtr() const { return (void *)(val.get_mpz_t()->_mp_d); }

    /* conversion to primitive types */	// TODO implement later if necessary in future
    // int toInt() const;
    // long toLong() const;
    // long long toLongLong() const;
    // unsigned int toUnsignedInt() const;
    // unsigned long toUnsignedLong() const;
    // unsigned long long toUnsignedLongLong() const;
    inline static bool startsWith(const std::string& s, const std::string& prefix) {
        return s.size() >= prefix.size() && s.compare(0, prefix.size(), prefix) == 0;
    }

    inline static bool isValid(const std::string& s) {
        return startsWith(s, "0x") ? mpz_class().set_str(s, 0) == 0 : mpz_class().set_str(s, 16) == 0;
    }

    template <typename T>   /* T could be any container with push_back method */
    static T Random() {
        std::random_device rd;
        T buf;
        for(size_t i=0; i<N/8; i++){
            buf.push_back(rd());
        }
        return buf;
    }
    template <>
    static std::shared_ptr<uBigInt> Random<std::shared_ptr<uBigInt>>() {
        std::random_device rd;
        std::vector<uint8_t> buf;
        buf.reserve(N/8);

        for(size_t i=0; i<N/8; i++){
            buf.emplace_back((uint8_t)rd());
        }

        mpz_class val;
        mpz_import(val.get_mpz_t(), N/8, uBigInt::MSB, sizeof(uint8_t), 0/*endian?*/, 0, buf.data());
        return std::shared_ptr<uBigInt>(new uBigInt(val));
    }
    template <>
    static uBigInt Random<uBigInt>() {
        std::random_device rd;
        std::vector<uint8_t> buf;
        buf.reserve(N/8);

        for(size_t i=0; i<N/8; i++){
            buf.emplace_back((uint8_t)rd());
        }

        mpz_class val;
        mpz_import(val.get_mpz_t(), N/8, uBigInt::MSB, sizeof(uint8_t), 0/*endian?*/, 0, buf.data());
        return uBigInt(val);
    }
};
// template <size_t N> constexpr char uBigInt<N>::MAX[];
// template <size_t N> static constexpr size_t BYTESIZE = N/8;  // C++14

template <size_t N>
uBigInt<N>::uBigInt(const char* c, size_t len, FORMAT fmt) : ringSize("0x1" + std::string(2*N/8, '0')) {
    DEBUG_U_BIG_INT;
    // printf("%s:%d (%s, %d, %lu)\n", __PRETTY_FUNCTION__, __LINE__, c, fmt, len);
    switch (fmt) {
        case HEXSTR:
            FromHexString(c);   // ignore len param. truncated by the 1st invalid hexstr char
            // TODO throw if truncated by invalid hexstr char not '\0'
            break;
        case BINARY:
            FromBytes(c, len);  // Caller must guarantee enough allocated of len. Otherwise out of memory boundary
            break;
        default:
            // TODO throw
            break;
    }
}

template <size_t N>
const uBigInt<N>& uBigInt<N>::operator++() {
    val++;
    if (val == ringSize)
        val = 0;
    return *this;
}

template <size_t N>
const uBigInt<N>& uBigInt<N>::operator--() {
    if (val == 0)
        val = ringSize;
    val--;
    return *this;
}

template <size_t N>
uBigInt<N> uBigInt<N>::operator++(int) {
    uBigInt<N> ret = *this;
    val++;
    if (val == ringSize)
        val = 0;
    return ret;
}

template <size_t N>
uBigInt<N> uBigInt<N>::operator--(int) {
    uBigInt<N> ret = *this;
    if (val == 0)
        val = ringSize;
    val--;
    return ret;
}

template <size_t N>
const uBigInt<N>& uBigInt<N>::operator+=(const uBigInt<N>& rhs) {
    val += rhs.val;
    if (val >= ringSize)
        val %= ringSize;
    return *this;
}

template <size_t N>
const uBigInt<N>& uBigInt<N>::operator-=(const uBigInt<N>& rhs) {
    val -= rhs.val;
    if(val < 0)
        val += ringSize;
    return *this;
}

template <size_t N>
const uBigInt<N>& uBigInt<N>::operator*=(const uBigInt<N>& rhs) {
    val *= rhs.val;
    if (val >= ringSize)
        val %= ringSize;
    return *this;
}

template <size_t N>
const uBigInt<N>& uBigInt<N>::operator/=(const uBigInt<N>& rhs) { // throw
    val /= rhs.val;
    return *this;
}

template <size_t N>
const uBigInt<N>& uBigInt<N>::operator%=(const uBigInt<N>& rhs) { // throw
    val %= rhs.val;
    return *this;
}

template <size_t N>
bool uBigInt<N>::FromHexString(const std::string& s) {
    DEBUG_U_BIG_INT
    int err = 0;

    // TODO: Check invalid hex char
    err = startsWith(s, "0x") ? val.set_str(s, 0) : val.set_str(s, 16);

    val %= ringSize;
    if (val < 0)
        val += ringSize;
    return err==0;
}

template <size_t N>
std::string uBigInt<N>::toString(int base) const {
    switch (base) {
        case 16: { return toHexString(); break; }
        default: return val.get_str(base);
    }
}

template <size_t N>
std::string uBigInt<N>::toHexString() const {
    std::ostringstream os;
    os << std::right << std::setfill('0') << std::setw(2*N/8) << val.get_str(16);
    return os.str();
}

template <size_t N>
std::string uBigInt<N>::toBytes(uBigInt::ENDIAN endian) const { //TODO function template for string & std::vector & std::array
    size_t cnt=0;
    char* bytes = (char*)mpz_export(NULL, &cnt, endian, sizeof(char), 0/*endian?*/, 0, val.get_mpz_t());
    assert(N/8>=cnt);   // this->val shoule never overflow ringSize

    std::ostringstream out;
    /* ENDIAN::MSB implement */
    for (size_t padding_len = N/8-cnt; padding_len; padding_len--) {
        out.put(0);   // padding leading zero if cnt < N/8
    }
    out.write(bytes, cnt);
    /* ENDIAN::MSB implement */
    // TODO: implement for ENDIAN::LSB && ENDIAN::NATIVE

    // free the memory which allocated by mpz_export()
    void (*free_fn) (void *, size_t) = NULL;
    mp_get_memory_functions(NULL, NULL, &free_fn);
    free_fn(bytes, cnt*sizeof(char));    // free the allocated memory by mpz_export()

    return out.str();
}

// input stream
template <unsigned long N>
std::istream& operator>>(std::istream &s, uBigInt<N> &n) {
#if __cplusplus >= 201103L	// supported after c++11
    std::string buf = {std::istreambuf_iterator<char>(s), std::istreambuf_iterator<char>()};
#else
    std::string buf;
    s >> buf;
#endif
    n.FromHexString(buf);
    return s;
}

// output stream
template <size_t N>
std::ostream& operator<<(std::ostream &s, const uBigInt<N> &n) {
    s << std::right << std::setfill('0') << std::setw(2*N/8) << n.val.get_str(16);
    return s;
}

namespace NKN{
    typedef uBigInt<32>  Uint32;
    typedef uBigInt<64>  Uint64;
    typedef uBigInt<128> Uint128;
    typedef uBigInt<160> Uint160;
    typedef uBigInt<192> Uint192;
    typedef uBigInt<256> Uint256;
    typedef uBigInt<512> Uint512;
};  // namespace NKN

#endif /* __U_BIG_INT__ */
