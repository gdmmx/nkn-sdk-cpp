// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gogo.proto

#include "gogo.pb.h"

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
namespace gogoproto {
}  // namespace gogoproto
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_gogo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_gogo_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_gogo_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_gogo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ngogo.proto\022\tgogoproto\032 google/protobuf"
  "/descriptor.proto:;\n\023goproto_enum_prefix"
  "\022\034.google.protobuf.EnumOptions\030\261\344\003 \001(\010:="
  "\n\025goproto_enum_stringer\022\034.google.protobu"
  "f.EnumOptions\030\305\344\003 \001(\010:5\n\renum_stringer\022\034"
  ".google.protobuf.EnumOptions\030\306\344\003 \001(\010:7\n\017"
  "enum_customname\022\034.google.protobuf.EnumOp"
  "tions\030\307\344\003 \001(\t:0\n\010enumdecl\022\034.google.proto"
  "buf.EnumOptions\030\310\344\003 \001(\010:A\n\024enumvalue_cus"
  "tomname\022!.google.protobuf.EnumValueOptio"
  "ns\030\321\203\004 \001(\t:;\n\023goproto_getters_all\022\034.goog"
  "le.protobuf.FileOptions\030\231\354\003 \001(\010:\?\n\027gopro"
  "to_enum_prefix_all\022\034.google.protobuf.Fil"
  "eOptions\030\232\354\003 \001(\010:<\n\024goproto_stringer_all"
  "\022\034.google.protobuf.FileOptions\030\233\354\003 \001(\010:9"
  "\n\021verbose_equal_all\022\034.google.protobuf.Fi"
  "leOptions\030\234\354\003 \001(\010:0\n\010face_all\022\034.google.p"
  "rotobuf.FileOptions\030\235\354\003 \001(\010:4\n\014gostring_"
  "all\022\034.google.protobuf.FileOptions\030\236\354\003 \001("
  "\010:4\n\014populate_all\022\034.google.protobuf.File"
  "Options\030\237\354\003 \001(\010:4\n\014stringer_all\022\034.google"
  ".protobuf.FileOptions\030\240\354\003 \001(\010:3\n\013onlyone"
  "_all\022\034.google.protobuf.FileOptions\030\241\354\003 \001"
  "(\010:1\n\tequal_all\022\034.google.protobuf.FileOp"
  "tions\030\245\354\003 \001(\010:7\n\017description_all\022\034.googl"
  "e.protobuf.FileOptions\030\246\354\003 \001(\010:3\n\013testge"
  "n_all\022\034.google.protobuf.FileOptions\030\247\354\003 "
  "\001(\010:4\n\014benchgen_all\022\034.google.protobuf.Fi"
  "leOptions\030\250\354\003 \001(\010:5\n\rmarshaler_all\022\034.goo"
  "gle.protobuf.FileOptions\030\251\354\003 \001(\010:7\n\017unma"
  "rshaler_all\022\034.google.protobuf.FileOption"
  "s\030\252\354\003 \001(\010:<\n\024stable_marshaler_all\022\034.goog"
  "le.protobuf.FileOptions\030\253\354\003 \001(\010:1\n\tsizer"
  "_all\022\034.google.protobuf.FileOptions\030\254\354\003 \001"
  "(\010:A\n\031goproto_enum_stringer_all\022\034.google"
  ".protobuf.FileOptions\030\255\354\003 \001(\010:9\n\021enum_st"
  "ringer_all\022\034.google.protobuf.FileOptions"
  "\030\256\354\003 \001(\010:<\n\024unsafe_marshaler_all\022\034.googl"
  "e.protobuf.FileOptions\030\257\354\003 \001(\010:>\n\026unsafe"
  "_unmarshaler_all\022\034.google.protobuf.FileO"
  "ptions\030\260\354\003 \001(\010:B\n\032goproto_extensions_map"
  "_all\022\034.google.protobuf.FileOptions\030\261\354\003 \001"
  "(\010:@\n\030goproto_unrecognized_all\022\034.google."
  "protobuf.FileOptions\030\262\354\003 \001(\010:8\n\020gogoprot"
  "o_import\022\034.google.protobuf.FileOptions\030\263"
  "\354\003 \001(\010:6\n\016protosizer_all\022\034.google.protob"
  "uf.FileOptions\030\264\354\003 \001(\010:3\n\013compare_all\022\034."
  "google.protobuf.FileOptions\030\265\354\003 \001(\010:4\n\014t"
  "ypedecl_all\022\034.google.protobuf.FileOption"
  "s\030\266\354\003 \001(\010:4\n\014enumdecl_all\022\034.google.proto"
  "buf.FileOptions\030\267\354\003 \001(\010:<\n\024goproto_regis"
  "tration\022\034.google.protobuf.FileOptions\030\270\354"
  "\003 \001(\010:7\n\017messagename_all\022\034.google.protob"
  "uf.FileOptions\030\271\354\003 \001(\010:=\n\025goproto_sizeca"
  "che_all\022\034.google.protobuf.FileOptions\030\272\354"
  "\003 \001(\010:;\n\023goproto_unkeyed_all\022\034.google.pr"
  "otobuf.FileOptions\030\273\354\003 \001(\010::\n\017goproto_ge"
  "tters\022\037.google.protobuf.MessageOptions\030\201"
  "\364\003 \001(\010:;\n\020goproto_stringer\022\037.google.prot"
  "obuf.MessageOptions\030\203\364\003 \001(\010:8\n\rverbose_e"
  "qual\022\037.google.protobuf.MessageOptions\030\204\364"
  "\003 \001(\010:/\n\004face\022\037.google.protobuf.MessageO"
  "ptions\030\205\364\003 \001(\010:3\n\010gostring\022\037.google.prot"
  "obuf.MessageOptions\030\206\364\003 \001(\010:3\n\010populate\022"
  "\037.google.protobuf.MessageOptions\030\207\364\003 \001(\010"
  ":3\n\010stringer\022\037.google.protobuf.MessageOp"
  "tions\030\300\213\004 \001(\010:2\n\007onlyone\022\037.google.protob"
  "uf.MessageOptions\030\211\364\003 \001(\010:0\n\005equal\022\037.goo"
  "gle.protobuf.MessageOptions\030\215\364\003 \001(\010:6\n\013d"
  "escription\022\037.google.protobuf.MessageOpti"
  "ons\030\216\364\003 \001(\010:2\n\007testgen\022\037.google.protobuf"
  ".MessageOptions\030\217\364\003 \001(\010:3\n\010benchgen\022\037.go"
  "ogle.protobuf.MessageOptions\030\220\364\003 \001(\010:4\n\t"
  "marshaler\022\037.google.protobuf.MessageOptio"
  "ns\030\221\364\003 \001(\010:6\n\013unmarshaler\022\037.google.proto"
  "buf.MessageOptions\030\222\364\003 \001(\010:;\n\020stable_mar"
  "shaler\022\037.google.protobuf.MessageOptions\030"
  "\223\364\003 \001(\010:0\n\005sizer\022\037.google.protobuf.Messa"
  "geOptions\030\224\364\003 \001(\010:;\n\020unsafe_marshaler\022\037."
  "google.protobuf.MessageOptions\030\227\364\003 \001(\010:="
  "\n\022unsafe_unmarshaler\022\037.google.protobuf.M"
  "essageOptions\030\230\364\003 \001(\010:A\n\026goproto_extensi"
  "ons_map\022\037.google.protobuf.MessageOptions"
  "\030\231\364\003 \001(\010:\?\n\024goproto_unrecognized\022\037.googl"
  "e.protobuf.MessageOptions\030\232\364\003 \001(\010:5\n\npro"
  "tosizer\022\037.google.protobuf.MessageOptions"
  "\030\234\364\003 \001(\010:2\n\007compare\022\037.google.protobuf.Me"
  "ssageOptions\030\235\364\003 \001(\010:3\n\010typedecl\022\037.googl"
  "e.protobuf.MessageOptions\030\236\364\003 \001(\010:6\n\013mes"
  "sagename\022\037.google.protobuf.MessageOption"
  "s\030\241\364\003 \001(\010:<\n\021goproto_sizecache\022\037.google."
  "protobuf.MessageOptions\030\242\364\003 \001(\010::\n\017gopro"
  "to_unkeyed\022\037.google.protobuf.MessageOpti"
  "ons\030\243\364\003 \001(\010:1\n\010nullable\022\035.google.protobu"
  "f.FieldOptions\030\351\373\003 \001(\010:.\n\005embed\022\035.google"
  ".protobuf.FieldOptions\030\352\373\003 \001(\010:3\n\ncustom"
  "type\022\035.google.protobuf.FieldOptions\030\353\373\003 "
  "\001(\t:3\n\ncustomname\022\035.google.protobuf.Fiel"
  "dOptions\030\354\373\003 \001(\t:0\n\007jsontag\022\035.google.pro"
  "tobuf.FieldOptions\030\355\373\003 \001(\t:1\n\010moretags\022\035"
  ".google.protobuf.FieldOptions\030\356\373\003 \001(\t:1\n"
  "\010casttype\022\035.google.protobuf.FieldOptions"
  "\030\357\373\003 \001(\t:0\n\007castkey\022\035.google.protobuf.Fi"
  "eldOptions\030\360\373\003 \001(\t:2\n\tcastvalue\022\035.google"
  ".protobuf.FieldOptions\030\361\373\003 \001(\t:0\n\007stdtim"
  "e\022\035.google.protobuf.FieldOptions\030\362\373\003 \001(\010"
  ":4\n\013stdduration\022\035.google.protobuf.FieldO"
  "ptions\030\363\373\003 \001(\010:3\n\nwktpointer\022\035.google.pr"
  "otobuf.FieldOptions\030\364\373\003 \001(\010BE\n\023com.googl"
  "e.protobufB\nGoGoProtosZ\"github.com/gogo/"
  "protobuf/gogoproto"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_gogo_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_gogo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gogo_2eproto = {
  false, false, 4418, descriptor_table_protodef_gogo_2eproto, "gogo.proto", 
  &descriptor_table_gogo_2eproto_once, descriptor_table_gogo_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_gogo_2eproto::offsets,
  nullptr, file_level_enum_descriptors_gogo_2eproto, file_level_service_descriptors_gogo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_gogo_2eproto_getter() {
  return &descriptor_table_gogo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_gogo_2eproto(&descriptor_table_gogo_2eproto);
namespace gogoproto {
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_prefix(kGoprotoEnumPrefixFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_stringer(kGoprotoEnumStringerFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  enum_stringer(kEnumStringerFieldNumber, false);
const std::string enum_customname_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  enum_customname(kEnumCustomnameFieldNumber, enum_customname_default);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  enumdecl(kEnumdeclFieldNumber, false);
const std::string enumvalue_customname_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  enumvalue_customname(kEnumvalueCustomnameFieldNumber, enumvalue_customname_default);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_getters_all(kGoprotoGettersAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_prefix_all(kGoprotoEnumPrefixAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_stringer_all(kGoprotoStringerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  verbose_equal_all(kVerboseEqualAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  face_all(kFaceAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  gostring_all(kGostringAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  populate_all(kPopulateAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stringer_all(kStringerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  onlyone_all(kOnlyoneAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  equal_all(kEqualAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  description_all(kDescriptionAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  testgen_all(kTestgenAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  benchgen_all(kBenchgenAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  marshaler_all(kMarshalerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unmarshaler_all(kUnmarshalerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stable_marshaler_all(kStableMarshalerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  sizer_all(kSizerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_stringer_all(kGoprotoEnumStringerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  enum_stringer_all(kEnumStringerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_marshaler_all(kUnsafeMarshalerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_unmarshaler_all(kUnsafeUnmarshalerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_extensions_map_all(kGoprotoExtensionsMapAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unrecognized_all(kGoprotoUnrecognizedAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  gogoproto_import(kGogoprotoImportFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  protosizer_all(kProtosizerAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  compare_all(kCompareAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  typedecl_all(kTypedeclAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  enumdecl_all(kEnumdeclAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_registration(kGoprotoRegistrationFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  messagename_all(kMessagenameAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_sizecache_all(kGoprotoSizecacheAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unkeyed_all(kGoprotoUnkeyedAllFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_getters(kGoprotoGettersFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_stringer(kGoprotoStringerFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  verbose_equal(kVerboseEqualFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  face(kFaceFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  gostring(kGostringFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  populate(kPopulateFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stringer(kStringerFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  onlyone(kOnlyoneFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  equal(kEqualFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  description(kDescriptionFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  testgen(kTestgenFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  benchgen(kBenchgenFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  marshaler(kMarshalerFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unmarshaler(kUnmarshalerFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stable_marshaler(kStableMarshalerFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  sizer(kSizerFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_marshaler(kUnsafeMarshalerFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_unmarshaler(kUnsafeUnmarshalerFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_extensions_map(kGoprotoExtensionsMapFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unrecognized(kGoprotoUnrecognizedFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  protosizer(kProtosizerFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  compare(kCompareFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  typedecl(kTypedeclFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  messagename(kMessagenameFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_sizecache(kGoprotoSizecacheFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unkeyed(kGoprotoUnkeyedFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  nullable(kNullableFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  embed(kEmbedFieldNumber, false);
const std::string customtype_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  customtype(kCustomtypeFieldNumber, customtype_default);
const std::string customname_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  customname(kCustomnameFieldNumber, customname_default);
const std::string jsontag_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  jsontag(kJsontagFieldNumber, jsontag_default);
const std::string moretags_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  moretags(kMoretagsFieldNumber, moretags_default);
const std::string casttype_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  casttype(kCasttypeFieldNumber, casttype_default);
const std::string castkey_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  castkey(kCastkeyFieldNumber, castkey_default);
const std::string castvalue_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  castvalue(kCastvalueFieldNumber, castvalue_default);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stdtime(kStdtimeFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  stdduration(kStddurationFieldNumber, false);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  wktpointer(kWktpointerFieldNumber, false);

// @@protoc_insertion_point(namespace_scope)
}  // namespace gogoproto
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>