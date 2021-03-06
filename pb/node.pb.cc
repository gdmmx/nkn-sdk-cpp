// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pb/node.proto

#include "pb/node.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace pb {
constexpr NodeData::NodeData(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : public_key_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , tls_websocket_domain_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , tls_json_rpc_domain_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , websocket_port_(0u)
  , json_rpc_port_(0u)
  , protocol_version_(0u)
  , tls_websocket_port_(0u)
  , tls_json_rpc_port_(0u){}
struct NodeDataDefaultTypeInternal {
  constexpr NodeDataDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~NodeDataDefaultTypeInternal() {}
  union {
    NodeData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT NodeDataDefaultTypeInternal _NodeData_default_instance_;
}  // namespace pb
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_pb_2fnode_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_pb_2fnode_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_pb_2fnode_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_pb_2fnode_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::pb::NodeData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::NodeData, public_key_),
  PROTOBUF_FIELD_OFFSET(::pb::NodeData, websocket_port_),
  PROTOBUF_FIELD_OFFSET(::pb::NodeData, json_rpc_port_),
  PROTOBUF_FIELD_OFFSET(::pb::NodeData, protocol_version_),
  PROTOBUF_FIELD_OFFSET(::pb::NodeData, tls_websocket_domain_),
  PROTOBUF_FIELD_OFFSET(::pb::NodeData, tls_websocket_port_),
  PROTOBUF_FIELD_OFFSET(::pb::NodeData, tls_json_rpc_domain_),
  PROTOBUF_FIELD_OFFSET(::pb::NodeData, tls_json_rpc_port_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::pb::NodeData)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_NodeData_default_instance_),
};

const char descriptor_table_protodef_pb_2fnode_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rpb/node.proto\022\002pb\"\331\001\n\010NodeData\022\022\n\npubl"
  "ic_key\030\001 \001(\014\022\026\n\016websocket_port\030\002 \001(\r\022\025\n\r"
  "json_rpc_port\030\003 \001(\r\022\030\n\020protocol_version\030"
  "\004 \001(\r\022\034\n\024tls_websocket_domain\030\005 \001(\t\022\032\n\022t"
  "ls_websocket_port\030\006 \001(\r\022\033\n\023tls_json_rpc_"
  "domain\030\007 \001(\t\022\031\n\021tls_json_rpc_port\030\010 \001(\r*"
  "\\\n\tSyncState\022\024\n\020WAIT_FOR_SYNCING\020\000\022\020\n\014SY"
  "NC_STARTED\020\001\022\021\n\rSYNC_FINISHED\020\002\022\024\n\020PERSI"
  "ST_FINISHED\020\003B\006Z\004./pbb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_pb_2fnode_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pb_2fnode_2eproto = {
  false, false, 349, descriptor_table_protodef_pb_2fnode_2eproto, "pb/node.proto", 
  &descriptor_table_pb_2fnode_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_pb_2fnode_2eproto::offsets,
  file_level_metadata_pb_2fnode_2eproto, file_level_enum_descriptors_pb_2fnode_2eproto, file_level_service_descriptors_pb_2fnode_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_pb_2fnode_2eproto_getter() {
  return &descriptor_table_pb_2fnode_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_pb_2fnode_2eproto(&descriptor_table_pb_2fnode_2eproto);
namespace pb {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SyncState_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_pb_2fnode_2eproto);
  return file_level_enum_descriptors_pb_2fnode_2eproto[0];
}
bool SyncState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class NodeData::_Internal {
 public:
};

NodeData::NodeData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:pb.NodeData)
}
NodeData::NodeData(const NodeData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  public_key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_public_key().empty()) {
    public_key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_public_key(), 
      GetArenaForAllocation());
  }
  tls_websocket_domain_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_tls_websocket_domain().empty()) {
    tls_websocket_domain_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_tls_websocket_domain(), 
      GetArenaForAllocation());
  }
  tls_json_rpc_domain_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_tls_json_rpc_domain().empty()) {
    tls_json_rpc_domain_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_tls_json_rpc_domain(), 
      GetArenaForAllocation());
  }
  ::memcpy(&websocket_port_, &from.websocket_port_,
    static_cast<size_t>(reinterpret_cast<char*>(&tls_json_rpc_port_) -
    reinterpret_cast<char*>(&websocket_port_)) + sizeof(tls_json_rpc_port_));
  // @@protoc_insertion_point(copy_constructor:pb.NodeData)
}

inline void NodeData::SharedCtor() {
public_key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
tls_websocket_domain_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
tls_json_rpc_domain_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&websocket_port_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&tls_json_rpc_port_) -
    reinterpret_cast<char*>(&websocket_port_)) + sizeof(tls_json_rpc_port_));
}

NodeData::~NodeData() {
  // @@protoc_insertion_point(destructor:pb.NodeData)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void NodeData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  public_key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  tls_websocket_domain_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  tls_json_rpc_domain_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void NodeData::ArenaDtor(void* object) {
  NodeData* _this = reinterpret_cast< NodeData* >(object);
  (void)_this;
}
void NodeData::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NodeData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void NodeData::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.NodeData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  public_key_.ClearToEmpty();
  tls_websocket_domain_.ClearToEmpty();
  tls_json_rpc_domain_.ClearToEmpty();
  ::memset(&websocket_port_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&tls_json_rpc_port_) -
      reinterpret_cast<char*>(&websocket_port_)) + sizeof(tls_json_rpc_port_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NodeData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes public_key = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_public_key();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 websocket_port = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          websocket_port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 json_rpc_port = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          json_rpc_port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 protocol_version = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          protocol_version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string tls_websocket_domain = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_tls_websocket_domain();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.NodeData.tls_websocket_domain"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 tls_websocket_port = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          tls_websocket_port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string tls_json_rpc_domain = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_tls_json_rpc_domain();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.NodeData.tls_json_rpc_domain"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 tls_json_rpc_port = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          tls_json_rpc_port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* NodeData::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.NodeData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes public_key = 1;
  if (!this->_internal_public_key().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_public_key(), target);
  }

  // uint32 websocket_port = 2;
  if (this->_internal_websocket_port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_websocket_port(), target);
  }

  // uint32 json_rpc_port = 3;
  if (this->_internal_json_rpc_port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_json_rpc_port(), target);
  }

  // uint32 protocol_version = 4;
  if (this->_internal_protocol_version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_protocol_version(), target);
  }

  // string tls_websocket_domain = 5;
  if (!this->_internal_tls_websocket_domain().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_tls_websocket_domain().data(), static_cast<int>(this->_internal_tls_websocket_domain().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "pb.NodeData.tls_websocket_domain");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_tls_websocket_domain(), target);
  }

  // uint32 tls_websocket_port = 6;
  if (this->_internal_tls_websocket_port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(6, this->_internal_tls_websocket_port(), target);
  }

  // string tls_json_rpc_domain = 7;
  if (!this->_internal_tls_json_rpc_domain().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_tls_json_rpc_domain().data(), static_cast<int>(this->_internal_tls_json_rpc_domain().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "pb.NodeData.tls_json_rpc_domain");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_tls_json_rpc_domain(), target);
  }

  // uint32 tls_json_rpc_port = 8;
  if (this->_internal_tls_json_rpc_port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(8, this->_internal_tls_json_rpc_port(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.NodeData)
  return target;
}

size_t NodeData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.NodeData)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes public_key = 1;
  if (!this->_internal_public_key().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_public_key());
  }

  // string tls_websocket_domain = 5;
  if (!this->_internal_tls_websocket_domain().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_tls_websocket_domain());
  }

  // string tls_json_rpc_domain = 7;
  if (!this->_internal_tls_json_rpc_domain().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_tls_json_rpc_domain());
  }

  // uint32 websocket_port = 2;
  if (this->_internal_websocket_port() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_websocket_port());
  }

  // uint32 json_rpc_port = 3;
  if (this->_internal_json_rpc_port() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_json_rpc_port());
  }

  // uint32 protocol_version = 4;
  if (this->_internal_protocol_version() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_protocol_version());
  }

  // uint32 tls_websocket_port = 6;
  if (this->_internal_tls_websocket_port() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_tls_websocket_port());
  }

  // uint32 tls_json_rpc_port = 8;
  if (this->_internal_tls_json_rpc_port() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_tls_json_rpc_port());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData NodeData::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    NodeData::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*NodeData::GetClassData() const { return &_class_data_; }

void NodeData::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<NodeData *>(to)->MergeFrom(
      static_cast<const NodeData &>(from));
}


void NodeData::MergeFrom(const NodeData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.NodeData)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_public_key().empty()) {
    _internal_set_public_key(from._internal_public_key());
  }
  if (!from._internal_tls_websocket_domain().empty()) {
    _internal_set_tls_websocket_domain(from._internal_tls_websocket_domain());
  }
  if (!from._internal_tls_json_rpc_domain().empty()) {
    _internal_set_tls_json_rpc_domain(from._internal_tls_json_rpc_domain());
  }
  if (from._internal_websocket_port() != 0) {
    _internal_set_websocket_port(from._internal_websocket_port());
  }
  if (from._internal_json_rpc_port() != 0) {
    _internal_set_json_rpc_port(from._internal_json_rpc_port());
  }
  if (from._internal_protocol_version() != 0) {
    _internal_set_protocol_version(from._internal_protocol_version());
  }
  if (from._internal_tls_websocket_port() != 0) {
    _internal_set_tls_websocket_port(from._internal_tls_websocket_port());
  }
  if (from._internal_tls_json_rpc_port() != 0) {
    _internal_set_tls_json_rpc_port(from._internal_tls_json_rpc_port());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void NodeData::CopyFrom(const NodeData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.NodeData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NodeData::IsInitialized() const {
  return true;
}

void NodeData::InternalSwap(NodeData* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &public_key_, GetArenaForAllocation(),
      &other->public_key_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &tls_websocket_domain_, GetArenaForAllocation(),
      &other->tls_websocket_domain_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &tls_json_rpc_domain_, GetArenaForAllocation(),
      &other->tls_json_rpc_domain_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(NodeData, tls_json_rpc_port_)
      + sizeof(NodeData::tls_json_rpc_port_)
      - PROTOBUF_FIELD_OFFSET(NodeData, websocket_port_)>(
          reinterpret_cast<char*>(&websocket_port_),
          reinterpret_cast<char*>(&other->websocket_port_));
}

::PROTOBUF_NAMESPACE_ID::Metadata NodeData::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_pb_2fnode_2eproto_getter, &descriptor_table_pb_2fnode_2eproto_once,
      file_level_metadata_pb_2fnode_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::pb::NodeData* Arena::CreateMaybeMessage< ::pb::NodeData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::pb::NodeData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
