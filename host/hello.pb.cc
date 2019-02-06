// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello.proto

#include "hello.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_hello_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_HelloInput_hello_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_hello_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_HelloOutput_hello_2eproto;
namespace hello_world {
class HelloInputDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<HelloInput> _instance;
} _HelloInput_default_instance_;
class HelloOutputDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<HelloOutput> _instance;
} _HelloOutput_default_instance_;
class EnclaveInputDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EnclaveInput> _instance;
} _EnclaveInput_default_instance_;
class EnclaveOutputDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EnclaveOutput> _instance;
} _EnclaveOutput_default_instance_;
}  // namespace hello_world
static void InitDefaultsHelloInput_hello_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::hello_world::_HelloInput_default_instance_;
    new (ptr) ::hello_world::HelloInput();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::hello_world::HelloInput::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_HelloInput_hello_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsHelloInput_hello_2eproto}, {}};

static void InitDefaultsHelloOutput_hello_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::hello_world::_HelloOutput_default_instance_;
    new (ptr) ::hello_world::HelloOutput();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::hello_world::HelloOutput::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_HelloOutput_hello_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsHelloOutput_hello_2eproto}, {}};

static void InitDefaultsEnclaveInput_hello_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::hello_world::_EnclaveInput_default_instance_;
    new (ptr) ::hello_world::EnclaveInput();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::hello_world::EnclaveInput::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EnclaveInput_hello_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEnclaveInput_hello_2eproto}, {}};

static void InitDefaultsEnclaveOutput_hello_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::hello_world::_EnclaveOutput_default_instance_;
    new (ptr) ::hello_world::EnclaveOutput();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::hello_world::EnclaveOutput::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EnclaveOutput_hello_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEnclaveOutput_hello_2eproto}, {}};

namespace hello_world {

// ===================================================================

void HelloInput::InitAsDefaultInstance() {
}
class HelloInput::HasBitSetters {
 public:
  static void set_has_to_greet(HelloInput* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HelloInput::kToGreetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HelloInput::HelloInput()
  : ::google::protobuf::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:hello_world.HelloInput)
}
HelloInput::HelloInput(const HelloInput& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  to_greet_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_to_greet()) {
    to_greet_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.to_greet_);
  }
  // @@protoc_insertion_point(copy_constructor:hello_world.HelloInput)
}

void HelloInput::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_HelloInput_hello_2eproto.base);
  to_greet_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

HelloInput::~HelloInput() {
  // @@protoc_insertion_point(destructor:hello_world.HelloInput)
  SharedDtor();
}

void HelloInput::SharedDtor() {
  to_greet_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void HelloInput::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const HelloInput& HelloInput::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_HelloInput_hello_2eproto.base);
  return *internal_default_instance();
}


void HelloInput::Clear() {
// @@protoc_insertion_point(message_clear_start:hello_world.HelloInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    to_greet_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* HelloInput::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<HelloInput*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = Varint::Parse32Inline(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // optional string to_greet = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = Varint::Parse32Inline(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        auto str = msg->mutable_to_greet();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          object = str;
          str->clear();
          str->reserve(size);
          parser_till_end = ::google::protobuf::internal::GreedyStringParser;
          goto len_delim_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(str, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual: (void)&&handle_unusual;
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end: (void)&&len_delim_till_end;
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                                 {parser_till_end, object}, size);
group_continues: (void)&&group_continues;
  GOOGLE_DCHECK(ptr >= end);
  GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->StoreGroup({_InternalParse, msg}, {parser_till_end, object}, depth, tag));
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool HelloInput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:hello_world.HelloInput)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string to_greet = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_to_greet()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:hello_world.HelloInput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:hello_world.HelloInput)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void HelloInput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:hello_world.HelloInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string to_greet = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->to_greet(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:hello_world.HelloInput)
}

size_t HelloInput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello_world.HelloInput)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string to_greet = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->to_greet());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void HelloInput::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HelloInput*>(&from));
}

void HelloInput::MergeFrom(const HelloInput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:hello_world.HelloInput)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_to_greet()) {
    _has_bits_[0] |= 0x00000001u;
    to_greet_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.to_greet_);
  }
}

void HelloInput::CopyFrom(const HelloInput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello_world.HelloInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloInput::IsInitialized() const {
  return true;
}

void HelloInput::Swap(HelloInput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HelloInput::InternalSwap(HelloInput* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  to_greet_.Swap(&other->to_greet_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::std::string HelloInput::GetTypeName() const {
  return "hello_world.HelloInput";
}


// ===================================================================

void HelloOutput::InitAsDefaultInstance() {
}
class HelloOutput::HasBitSetters {
 public:
  static void set_has_greeting_message(HelloOutput* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HelloOutput::kGreetingMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HelloOutput::HelloOutput()
  : ::google::protobuf::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:hello_world.HelloOutput)
}
HelloOutput::HelloOutput(const HelloOutput& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  greeting_message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_greeting_message()) {
    greeting_message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.greeting_message_);
  }
  // @@protoc_insertion_point(copy_constructor:hello_world.HelloOutput)
}

void HelloOutput::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_HelloOutput_hello_2eproto.base);
  greeting_message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

HelloOutput::~HelloOutput() {
  // @@protoc_insertion_point(destructor:hello_world.HelloOutput)
  SharedDtor();
}

void HelloOutput::SharedDtor() {
  greeting_message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void HelloOutput::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const HelloOutput& HelloOutput::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_HelloOutput_hello_2eproto.base);
  return *internal_default_instance();
}


void HelloOutput::Clear() {
// @@protoc_insertion_point(message_clear_start:hello_world.HelloOutput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    greeting_message_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* HelloOutput::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<HelloOutput*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = Varint::Parse32Inline(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // optional string greeting_message = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = Varint::Parse32Inline(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        auto str = msg->mutable_greeting_message();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          object = str;
          str->clear();
          str->reserve(size);
          parser_till_end = ::google::protobuf::internal::GreedyStringParser;
          goto len_delim_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(str, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual: (void)&&handle_unusual;
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end: (void)&&len_delim_till_end;
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                                 {parser_till_end, object}, size);
group_continues: (void)&&group_continues;
  GOOGLE_DCHECK(ptr >= end);
  GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->StoreGroup({_InternalParse, msg}, {parser_till_end, object}, depth, tag));
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool HelloOutput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:hello_world.HelloOutput)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string greeting_message = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_greeting_message()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:hello_world.HelloOutput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:hello_world.HelloOutput)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void HelloOutput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:hello_world.HelloOutput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string greeting_message = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->greeting_message(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:hello_world.HelloOutput)
}

size_t HelloOutput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello_world.HelloOutput)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string greeting_message = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->greeting_message());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void HelloOutput::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HelloOutput*>(&from));
}

void HelloOutput::MergeFrom(const HelloOutput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:hello_world.HelloOutput)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_greeting_message()) {
    _has_bits_[0] |= 0x00000001u;
    greeting_message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.greeting_message_);
  }
}

void HelloOutput::CopyFrom(const HelloOutput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello_world.HelloOutput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloOutput::IsInitialized() const {
  return true;
}

void HelloOutput::Swap(HelloOutput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HelloOutput::InternalSwap(HelloOutput* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  greeting_message_.Swap(&other->greeting_message_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::std::string HelloOutput::GetTypeName() const {
  return "hello_world.HelloOutput";
}


// ===================================================================

void EnclaveInput::InitAsDefaultInstance() {
}
class EnclaveInput::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EnclaveInput::EnclaveInput()
  : ::google::protobuf::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:hello_world.EnclaveInput)
}
EnclaveInput::EnclaveInput(const EnclaveInput& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  // @@protoc_insertion_point(copy_constructor:hello_world.EnclaveInput)
}

void EnclaveInput::SharedCtor() {
}

EnclaveInput::~EnclaveInput() {
  // @@protoc_insertion_point(destructor:hello_world.EnclaveInput)
  SharedDtor();
}

void EnclaveInput::SharedDtor() {
}

void EnclaveInput::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EnclaveInput& EnclaveInput::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_EnclaveInput_hello_2eproto.base);
  return *internal_default_instance();
}


void EnclaveInput::Clear() {
// @@protoc_insertion_point(message_clear_start:hello_world.EnclaveInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* EnclaveInput::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<EnclaveInput*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = Varint::Parse32Inline(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      default: {
      handle_unusual: (void)&&handle_unusual;
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
      if ((8000u <= tag)) {
        auto res = msg->_extensions_.ParseField(tag, {_InternalParse, msg}, ptr, end,
            internal_default_instance(), &msg->_internal_metadata_, ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
        continue;
      }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end: (void)&&len_delim_till_end;
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                                 {parser_till_end, object}, size);
group_continues: (void)&&group_continues;
  GOOGLE_DCHECK(ptr >= end);
  GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->StoreGroup({_InternalParse, msg}, {parser_till_end, object}, depth, tag));
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool EnclaveInput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:hello_world.EnclaveInput)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    if ((8000u <= tag)) {
      DO_(_extensions_.ParseField(tag, input,
          internal_default_instance(),
          &unknown_fields_stream));
      continue;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(
        input, tag, &unknown_fields_stream));
  }
success:
  // @@protoc_insertion_point(parse_success:hello_world.EnclaveInput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:hello_world.EnclaveInput)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void EnclaveInput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:hello_world.EnclaveInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(1000, 536870912, output);

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:hello_world.EnclaveInput)
}

size_t EnclaveInput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello_world.EnclaveInput)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  total_size += _internal_metadata_.unknown_fields().size();

  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EnclaveInput::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EnclaveInput*>(&from));
}

void EnclaveInput::MergeFrom(const EnclaveInput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:hello_world.EnclaveInput)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void EnclaveInput::CopyFrom(const EnclaveInput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello_world.EnclaveInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnclaveInput::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void EnclaveInput::Swap(EnclaveInput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EnclaveInput::InternalSwap(EnclaveInput* other) {
  using std::swap;
  _extensions_.Swap(&other->_extensions_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
}

::std::string EnclaveInput::GetTypeName() const {
  return "hello_world.EnclaveInput";
}


// ===================================================================

void EnclaveOutput::InitAsDefaultInstance() {
}
class EnclaveOutput::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EnclaveOutput::EnclaveOutput()
  : ::google::protobuf::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:hello_world.EnclaveOutput)
}
EnclaveOutput::EnclaveOutput(const EnclaveOutput& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  // @@protoc_insertion_point(copy_constructor:hello_world.EnclaveOutput)
}

void EnclaveOutput::SharedCtor() {
}

EnclaveOutput::~EnclaveOutput() {
  // @@protoc_insertion_point(destructor:hello_world.EnclaveOutput)
  SharedDtor();
}

void EnclaveOutput::SharedDtor() {
}

void EnclaveOutput::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EnclaveOutput& EnclaveOutput::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_EnclaveOutput_hello_2eproto.base);
  return *internal_default_instance();
}


void EnclaveOutput::Clear() {
// @@protoc_insertion_point(message_clear_start:hello_world.EnclaveOutput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* EnclaveOutput::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<EnclaveOutput*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = Varint::Parse32Inline(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      default: {
      handle_unusual: (void)&&handle_unusual;
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
      if ((8000u <= tag)) {
        auto res = msg->_extensions_.ParseField(tag, {_InternalParse, msg}, ptr, end,
            internal_default_instance(), &msg->_internal_metadata_, ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
        continue;
      }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end: (void)&&len_delim_till_end;
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                                 {parser_till_end, object}, size);
group_continues: (void)&&group_continues;
  GOOGLE_DCHECK(ptr >= end);
  GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->StoreGroup({_InternalParse, msg}, {parser_till_end, object}, depth, tag));
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool EnclaveOutput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:hello_world.EnclaveOutput)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    if ((8000u <= tag)) {
      DO_(_extensions_.ParseField(tag, input,
          internal_default_instance(),
          &unknown_fields_stream));
      continue;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(
        input, tag, &unknown_fields_stream));
  }
success:
  // @@protoc_insertion_point(parse_success:hello_world.EnclaveOutput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:hello_world.EnclaveOutput)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void EnclaveOutput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:hello_world.EnclaveOutput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(1000, 536870912, output);

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:hello_world.EnclaveOutput)
}

size_t EnclaveOutput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello_world.EnclaveOutput)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  total_size += _internal_metadata_.unknown_fields().size();

  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EnclaveOutput::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EnclaveOutput*>(&from));
}

void EnclaveOutput::MergeFrom(const EnclaveOutput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:hello_world.EnclaveOutput)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void EnclaveOutput::CopyFrom(const EnclaveOutput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello_world.EnclaveOutput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnclaveOutput::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void EnclaveOutput::Swap(EnclaveOutput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EnclaveOutput::InternalSwap(EnclaveOutput* other) {
  using std::swap;
  _extensions_.Swap(&other->_extensions_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
}

::std::string EnclaveOutput::GetTypeName() const {
  return "hello_world.EnclaveOutput";
}

::google::protobuf::internal::ExtensionIdentifier< ::hello_world::EnclaveInput,
    ::google::protobuf::internal::MessageTypeTraits< ::hello_world::HelloInput >, 11, false >
  enclave_input_hello(kEnclaveInputHelloFieldNumber, *::hello_world::HelloInput::internal_default_instance());
::google::protobuf::internal::ExtensionIdentifier< ::hello_world::EnclaveOutput,
    ::google::protobuf::internal::MessageTypeTraits< ::hello_world::HelloOutput >, 11, false >
  enclave_output_hello(kEnclaveOutputHelloFieldNumber, *::hello_world::HelloOutput::internal_default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace hello_world
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::hello_world::HelloInput* Arena::CreateMaybeMessage< ::hello_world::HelloInput >(Arena* arena) {
  return Arena::CreateInternal< ::hello_world::HelloInput >(arena);
}
template<> PROTOBUF_NOINLINE ::hello_world::HelloOutput* Arena::CreateMaybeMessage< ::hello_world::HelloOutput >(Arena* arena) {
  return Arena::CreateInternal< ::hello_world::HelloOutput >(arena);
}
template<> PROTOBUF_NOINLINE ::hello_world::EnclaveInput* Arena::CreateMaybeMessage< ::hello_world::EnclaveInput >(Arena* arena) {
  return Arena::CreateInternal< ::hello_world::EnclaveInput >(arena);
}
template<> PROTOBUF_NOINLINE ::hello_world::EnclaveOutput* Arena::CreateMaybeMessage< ::hello_world::EnclaveOutput >(Arena* arena) {
  return Arena::CreateInternal< ::hello_world::EnclaveOutput >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>