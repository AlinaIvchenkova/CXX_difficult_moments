// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: studentsgroup.proto

#include "studentsgroup.pb.h"

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
namespace proto_students {
constexpr FullName::FullName(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : first_name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , second_name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , patronymic_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct FullNameDefaultTypeInternal {
  constexpr FullNameDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~FullNameDefaultTypeInternal() {}
  union {
    FullName _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT FullNameDefaultTypeInternal _FullName_default_instance_;
constexpr Student::Student(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : grade_()
  , name_(nullptr)
  , average_grade_(0){}
struct StudentDefaultTypeInternal {
  constexpr StudentDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StudentDefaultTypeInternal() {}
  union {
    Student _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StudentDefaultTypeInternal _Student_default_instance_;
constexpr StudentsGroup::StudentsGroup(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : students_(){}
struct StudentsGroupDefaultTypeInternal {
  constexpr StudentsGroupDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StudentsGroupDefaultTypeInternal() {}
  union {
    StudentsGroup _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace proto_students
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_studentsgroup_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_studentsgroup_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_studentsgroup_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_studentsgroup_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::proto_students::FullName, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::proto_students::FullName, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto_students::FullName, first_name_),
  PROTOBUF_FIELD_OFFSET(::proto_students::FullName, second_name_),
  PROTOBUF_FIELD_OFFSET(::proto_students::FullName, patronymic_),
  ~0u,
  ~0u,
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::proto_students::Student, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto_students::Student, name_),
  PROTOBUF_FIELD_OFFSET(::proto_students::Student, grade_),
  PROTOBUF_FIELD_OFFSET(::proto_students::Student, average_grade_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::proto_students::StudentsGroup, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto_students::StudentsGroup, students_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::proto_students::FullName)},
  { 11, -1, sizeof(::proto_students::Student)},
  { 19, -1, sizeof(::proto_students::StudentsGroup)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::proto_students::_FullName_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::proto_students::_Student_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::proto_students::_StudentsGroup_default_instance_),
};

const char descriptor_table_protodef_studentsgroup_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023studentsgroup.proto\022\016proto_students\"[\n"
  "\010FullName\022\022\n\nfirst_name\030\001 \001(\t\022\023\n\013second_"
  "name\030\002 \001(\t\022\027\n\npatronymic\030\003 \001(\tH\000\210\001\001B\r\n\013_"
  "patronymic\"W\n\007Student\022&\n\004name\030\001 \001(\0132\030.pr"
  "oto_students.FullName\022\r\n\005grade\030\002 \003(\001\022\025\n\r"
  "average_grade\030\003 \001(\001\":\n\rStudentsGroup\022)\n\010"
  "students\030\001 \003(\0132\027.proto_students.Studentb"
  "\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_studentsgroup_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_studentsgroup_2eproto = {
  false, false, 287, descriptor_table_protodef_studentsgroup_2eproto, "studentsgroup.proto", 
  &descriptor_table_studentsgroup_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_studentsgroup_2eproto::offsets,
  file_level_metadata_studentsgroup_2eproto, file_level_enum_descriptors_studentsgroup_2eproto, file_level_service_descriptors_studentsgroup_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_studentsgroup_2eproto_getter() {
  return &descriptor_table_studentsgroup_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_studentsgroup_2eproto(&descriptor_table_studentsgroup_2eproto);
namespace proto_students {

// ===================================================================

class FullName::_Internal {
 public:
  using HasBits = decltype(std::declval<FullName>()._has_bits_);
  static void set_has_patronymic(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

FullName::FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto_students.FullName)
}
FullName::FullName(const FullName& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  first_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_first_name().empty()) {
    first_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_first_name(), 
      GetArenaForAllocation());
  }
  second_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_second_name().empty()) {
    second_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_second_name(), 
      GetArenaForAllocation());
  }
  patronymic_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_patronymic()) {
    patronymic_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_patronymic(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:proto_students.FullName)
}

void FullName::SharedCtor() {
first_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
second_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
patronymic_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

FullName::~FullName() {
  // @@protoc_insertion_point(destructor:proto_students.FullName)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void FullName::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  first_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  second_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  patronymic_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void FullName::ArenaDtor(void* object) {
  FullName* _this = reinterpret_cast< FullName* >(object);
  (void)_this;
}
void FullName::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void FullName::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FullName::Clear() {
// @@protoc_insertion_point(message_clear_start:proto_students.FullName)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  first_name_.ClearToEmpty();
  second_name_.ClearToEmpty();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    patronymic_.ClearNonDefaultToEmpty();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FullName::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string first_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_first_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "proto_students.FullName.first_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string second_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_second_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "proto_students.FullName.second_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string patronymic = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_patronymic();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "proto_students.FullName.patronymic"));
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* FullName::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto_students.FullName)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string first_name = 1;
  if (!this->first_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_first_name().data(), static_cast<int>(this->_internal_first_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "proto_students.FullName.first_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_first_name(), target);
  }

  // string second_name = 2;
  if (!this->second_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_second_name().data(), static_cast<int>(this->_internal_second_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "proto_students.FullName.second_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_second_name(), target);
  }

  // optional string patronymic = 3;
  if (_internal_has_patronymic()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_patronymic().data(), static_cast<int>(this->_internal_patronymic().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "proto_students.FullName.patronymic");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_patronymic(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto_students.FullName)
  return target;
}

size_t FullName::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto_students.FullName)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string first_name = 1;
  if (!this->first_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_first_name());
  }

  // string second_name = 2;
  if (!this->second_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_second_name());
  }

  // optional string patronymic = 3;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_patronymic());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FullName::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto_students.FullName)
  GOOGLE_DCHECK_NE(&from, this);
  const FullName* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<FullName>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto_students.FullName)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto_students.FullName)
    MergeFrom(*source);
  }
}

void FullName::MergeFrom(const FullName& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto_students.FullName)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from.first_name().empty()) {
    _internal_set_first_name(from._internal_first_name());
  }
  if (!from.second_name().empty()) {
    _internal_set_second_name(from._internal_second_name());
  }
  if (from._internal_has_patronymic()) {
    _internal_set_patronymic(from._internal_patronymic());
  }
}

void FullName::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto_students.FullName)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FullName::CopyFrom(const FullName& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto_students.FullName)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FullName::IsInitialized() const {
  return true;
}

void FullName::InternalSwap(FullName* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &first_name_, GetArenaForAllocation(),
      &other->first_name_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &second_name_, GetArenaForAllocation(),
      &other->second_name_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &patronymic_, GetArenaForAllocation(),
      &other->patronymic_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata FullName::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_studentsgroup_2eproto_getter, &descriptor_table_studentsgroup_2eproto_once,
      file_level_metadata_studentsgroup_2eproto[0]);
}

// ===================================================================

class Student::_Internal {
 public:
  static const ::proto_students::FullName& name(const Student* msg);
};

const ::proto_students::FullName&
Student::_Internal::name(const Student* msg) {
  return *msg->name_;
}
Student::Student(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  grade_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto_students.Student)
}
Student::Student(const Student& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      grade_(from.grade_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_name()) {
    name_ = new ::proto_students::FullName(*from.name_);
  } else {
    name_ = nullptr;
  }
  average_grade_ = from.average_grade_;
  // @@protoc_insertion_point(copy_constructor:proto_students.Student)
}

void Student::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&name_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&average_grade_) -
    reinterpret_cast<char*>(&name_)) + sizeof(average_grade_));
}

Student::~Student() {
  // @@protoc_insertion_point(destructor:proto_students.Student)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Student::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete name_;
}

void Student::ArenaDtor(void* object) {
  Student* _this = reinterpret_cast< Student* >(object);
  (void)_this;
}
void Student::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Student::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Student::Clear() {
// @@protoc_insertion_point(message_clear_start:proto_students.Student)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  grade_.Clear();
  if (GetArenaForAllocation() == nullptr && name_ != nullptr) {
    delete name_;
  }
  name_ = nullptr;
  average_grade_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Student::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .proto_students.FullName name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_name(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated double grade = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedDoubleParser(_internal_mutable_grade(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17) {
          _internal_add_grade(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double average_grade = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          average_grade_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

::PROTOBUF_NAMESPACE_ID::uint8* Student::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto_students.Student)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto_students.FullName name = 1;
  if (this->has_name()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::name(this), target, stream);
  }

  // repeated double grade = 2;
  if (this->_internal_grade_size() > 0) {
    target = stream->WriteFixedPacked(2, _internal_grade(), target);
  }

  // double average_grade = 3;
  if (!(this->average_grade() <= 0 && this->average_grade() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_average_grade(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto_students.Student)
  return target;
}

size_t Student::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto_students.Student)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated double grade = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_grade_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    total_size += data_size;
  }

  // .proto_students.FullName name = 1;
  if (this->has_name()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *name_);
  }

  // double average_grade = 3;
  if (!(this->average_grade() <= 0 && this->average_grade() >= 0)) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Student::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto_students.Student)
  GOOGLE_DCHECK_NE(&from, this);
  const Student* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Student>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto_students.Student)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto_students.Student)
    MergeFrom(*source);
  }
}

void Student::MergeFrom(const Student& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto_students.Student)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  grade_.MergeFrom(from.grade_);
  if (from.has_name()) {
    _internal_mutable_name()->::proto_students::FullName::MergeFrom(from._internal_name());
  }
  if (!(from.average_grade() <= 0 && from.average_grade() >= 0)) {
    _internal_set_average_grade(from._internal_average_grade());
  }
}

void Student::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto_students.Student)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Student::CopyFrom(const Student& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto_students.Student)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Student::IsInitialized() const {
  return true;
}

void Student::InternalSwap(Student* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  grade_.InternalSwap(&other->grade_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Student, average_grade_)
      + sizeof(Student::average_grade_)
      - PROTOBUF_FIELD_OFFSET(Student, name_)>(
          reinterpret_cast<char*>(&name_),
          reinterpret_cast<char*>(&other->name_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Student::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_studentsgroup_2eproto_getter, &descriptor_table_studentsgroup_2eproto_once,
      file_level_metadata_studentsgroup_2eproto[1]);
}

// ===================================================================

class StudentsGroup::_Internal {
 public:
};

StudentsGroup::StudentsGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  students_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto_students.StudentsGroup)
}
StudentsGroup::StudentsGroup(const StudentsGroup& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      students_(from.students_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:proto_students.StudentsGroup)
}

void StudentsGroup::SharedCtor() {
}

StudentsGroup::~StudentsGroup() {
  // @@protoc_insertion_point(destructor:proto_students.StudentsGroup)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void StudentsGroup::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void StudentsGroup::ArenaDtor(void* object) {
  StudentsGroup* _this = reinterpret_cast< StudentsGroup* >(object);
  (void)_this;
}
void StudentsGroup::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void StudentsGroup::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void StudentsGroup::Clear() {
// @@protoc_insertion_point(message_clear_start:proto_students.StudentsGroup)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  students_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StudentsGroup::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .proto_students.Student students = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_students(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* StudentsGroup::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto_students.StudentsGroup)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto_students.Student students = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_students_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_students(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto_students.StudentsGroup)
  return target;
}

size_t StudentsGroup::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto_students.StudentsGroup)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .proto_students.Student students = 1;
  total_size += 1UL * this->_internal_students_size();
  for (const auto& msg : this->students_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StudentsGroup::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto_students.StudentsGroup)
  GOOGLE_DCHECK_NE(&from, this);
  const StudentsGroup* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<StudentsGroup>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto_students.StudentsGroup)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto_students.StudentsGroup)
    MergeFrom(*source);
  }
}

void StudentsGroup::MergeFrom(const StudentsGroup& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto_students.StudentsGroup)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  students_.MergeFrom(from.students_);
}

void StudentsGroup::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto_students.StudentsGroup)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StudentsGroup::CopyFrom(const StudentsGroup& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto_students.StudentsGroup)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StudentsGroup::IsInitialized() const {
  return true;
}

void StudentsGroup::InternalSwap(StudentsGroup* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  students_.InternalSwap(&other->students_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StudentsGroup::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_studentsgroup_2eproto_getter, &descriptor_table_studentsgroup_2eproto_once,
      file_level_metadata_studentsgroup_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto_students
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::proto_students::FullName* Arena::CreateMaybeMessage< ::proto_students::FullName >(Arena* arena) {
  return Arena::CreateMessageInternal< ::proto_students::FullName >(arena);
}
template<> PROTOBUF_NOINLINE ::proto_students::Student* Arena::CreateMaybeMessage< ::proto_students::Student >(Arena* arena) {
  return Arena::CreateMessageInternal< ::proto_students::Student >(arena);
}
template<> PROTOBUF_NOINLINE ::proto_students::StudentsGroup* Arena::CreateMaybeMessage< ::proto_students::StudentsGroup >(Arena* arena) {
  return Arena::CreateMessageInternal< ::proto_students::StudentsGroup >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
