// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packets.proto

#ifndef PROTOBUF_packets_2eproto__INCLUDED
#define PROTOBUF_packets_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace packets {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_packets_2eproto();
void protobuf_AssignDesc_packets_2eproto();
void protobuf_ShutdownFile_packets_2eproto();

class Packet;
class Hello;
class Login;

enum ID {
  INVALID = 0,
  HELLO = 1,
  LOGIN = 2
};
bool ID_IsValid(int value);
const ID ID_MIN = INVALID;
const ID ID_MAX = LOGIN;
const int ID_ARRAYSIZE = ID_MAX + 1;

const ::google::protobuf::EnumDescriptor* ID_descriptor();
inline const ::std::string& ID_Name(ID value) {
  return ::google::protobuf::internal::NameOfEnum(
    ID_descriptor(), value);
}
inline bool ID_Parse(
    const ::std::string& name, ID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ID>(
    ID_descriptor(), name, value);
}
// ===================================================================

class Packet : public ::google::protobuf::Message {
 public:
  Packet();
  virtual ~Packet();

  Packet(const Packet& from);

  inline Packet& operator=(const Packet& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Packet& default_instance();

  void Swap(Packet* other);

  // implements Message ----------------------------------------------

  Packet* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Packet& from);
  void MergeFrom(const Packet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .packets.ID id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::packets::ID id() const;
  inline void set_id(::packets::ID value);

  // @@protoc_insertion_point(class_scope:packets.Packet)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int id_;
  friend void  protobuf_AddDesc_packets_2eproto();
  friend void protobuf_AssignDesc_packets_2eproto();
  friend void protobuf_ShutdownFile_packets_2eproto();

  void InitAsDefaultInstance();
  static Packet* default_instance_;
};
// -------------------------------------------------------------------

class Hello : public ::google::protobuf::Message {
 public:
  Hello();
  virtual ~Hello();

  Hello(const Hello& from);

  inline Hello& operator=(const Hello& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Hello& default_instance();

  void Swap(Hello* other);

  // implements Message ----------------------------------------------

  Hello* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Hello& from);
  void MergeFrom(const Hello& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .packets.ID id = 1 [default = HELLO];
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::packets::ID id() const;
  inline void set_id(::packets::ID value);

  // @@protoc_insertion_point(class_scope:packets.Hello)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int id_;
  friend void  protobuf_AddDesc_packets_2eproto();
  friend void protobuf_AssignDesc_packets_2eproto();
  friend void protobuf_ShutdownFile_packets_2eproto();

  void InitAsDefaultInstance();
  static Hello* default_instance_;
};
// -------------------------------------------------------------------

class Login : public ::google::protobuf::Message {
 public:
  Login();
  virtual ~Login();

  Login(const Login& from);

  inline Login& operator=(const Login& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Login& default_instance();

  void Swap(Login* other);

  // implements Message ----------------------------------------------

  Login* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Login& from);
  void MergeFrom(const Login& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .packets.ID id = 1 [default = LOGIN];
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::packets::ID id() const;
  inline void set_id(::packets::ID value);

  // required string net_id = 2;
  inline bool has_net_id() const;
  inline void clear_net_id();
  static const int kNetIdFieldNumber = 2;
  inline const ::std::string& net_id() const;
  inline void set_net_id(const ::std::string& value);
  inline void set_net_id(const char* value);
  inline void set_net_id(const char* value, size_t size);
  inline ::std::string* mutable_net_id();
  inline ::std::string* release_net_id();
  inline void set_allocated_net_id(::std::string* net_id);

  // required string auth_key = 3;
  inline bool has_auth_key() const;
  inline void clear_auth_key();
  static const int kAuthKeyFieldNumber = 3;
  inline const ::std::string& auth_key() const;
  inline void set_auth_key(const ::std::string& value);
  inline void set_auth_key(const char* value);
  inline void set_auth_key(const char* value, size_t size);
  inline ::std::string* mutable_auth_key();
  inline ::std::string* release_auth_key();
  inline void set_allocated_auth_key(::std::string* auth_key);

  // @@protoc_insertion_point(class_scope:packets.Login)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_net_id();
  inline void clear_has_net_id();
  inline void set_has_auth_key();
  inline void clear_has_auth_key();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* net_id_;
  ::std::string* auth_key_;
  int id_;
  friend void  protobuf_AddDesc_packets_2eproto();
  friend void protobuf_AssignDesc_packets_2eproto();
  friend void protobuf_ShutdownFile_packets_2eproto();

  void InitAsDefaultInstance();
  static Login* default_instance_;
};
// ===================================================================


// ===================================================================

// Packet

// required .packets.ID id = 1;
inline bool Packet::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Packet::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Packet::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Packet::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::packets::ID Packet::id() const {
  // @@protoc_insertion_point(field_get:packets.Packet.id)
  return static_cast< ::packets::ID >(id_);
}
inline void Packet::set_id(::packets::ID value) {
  assert(::packets::ID_IsValid(value));
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:packets.Packet.id)
}

// -------------------------------------------------------------------

// Hello

// optional .packets.ID id = 1 [default = HELLO];
inline bool Hello::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Hello::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Hello::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Hello::clear_id() {
  id_ = 1;
  clear_has_id();
}
inline ::packets::ID Hello::id() const {
  // @@protoc_insertion_point(field_get:packets.Hello.id)
  return static_cast< ::packets::ID >(id_);
}
inline void Hello::set_id(::packets::ID value) {
  assert(::packets::ID_IsValid(value));
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:packets.Hello.id)
}

// -------------------------------------------------------------------

// Login

// optional .packets.ID id = 1 [default = LOGIN];
inline bool Login::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Login::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Login::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Login::clear_id() {
  id_ = 2;
  clear_has_id();
}
inline ::packets::ID Login::id() const {
  // @@protoc_insertion_point(field_get:packets.Login.id)
  return static_cast< ::packets::ID >(id_);
}
inline void Login::set_id(::packets::ID value) {
  assert(::packets::ID_IsValid(value));
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:packets.Login.id)
}

// required string net_id = 2;
inline bool Login::has_net_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Login::set_has_net_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Login::clear_has_net_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Login::clear_net_id() {
  if (net_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    net_id_->clear();
  }
  clear_has_net_id();
}
inline const ::std::string& Login::net_id() const {
  // @@protoc_insertion_point(field_get:packets.Login.net_id)
  return *net_id_;
}
inline void Login::set_net_id(const ::std::string& value) {
  set_has_net_id();
  if (net_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    net_id_ = new ::std::string;
  }
  net_id_->assign(value);
  // @@protoc_insertion_point(field_set:packets.Login.net_id)
}
inline void Login::set_net_id(const char* value) {
  set_has_net_id();
  if (net_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    net_id_ = new ::std::string;
  }
  net_id_->assign(value);
  // @@protoc_insertion_point(field_set_char:packets.Login.net_id)
}
inline void Login::set_net_id(const char* value, size_t size) {
  set_has_net_id();
  if (net_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    net_id_ = new ::std::string;
  }
  net_id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:packets.Login.net_id)
}
inline ::std::string* Login::mutable_net_id() {
  set_has_net_id();
  if (net_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    net_id_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:packets.Login.net_id)
  return net_id_;
}
inline ::std::string* Login::release_net_id() {
  clear_has_net_id();
  if (net_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = net_id_;
    net_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Login::set_allocated_net_id(::std::string* net_id) {
  if (net_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete net_id_;
  }
  if (net_id) {
    set_has_net_id();
    net_id_ = net_id;
  } else {
    clear_has_net_id();
    net_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:packets.Login.net_id)
}

// required string auth_key = 3;
inline bool Login::has_auth_key() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Login::set_has_auth_key() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Login::clear_has_auth_key() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Login::clear_auth_key() {
  if (auth_key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_key_->clear();
  }
  clear_has_auth_key();
}
inline const ::std::string& Login::auth_key() const {
  // @@protoc_insertion_point(field_get:packets.Login.auth_key)
  return *auth_key_;
}
inline void Login::set_auth_key(const ::std::string& value) {
  set_has_auth_key();
  if (auth_key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_key_ = new ::std::string;
  }
  auth_key_->assign(value);
  // @@protoc_insertion_point(field_set:packets.Login.auth_key)
}
inline void Login::set_auth_key(const char* value) {
  set_has_auth_key();
  if (auth_key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_key_ = new ::std::string;
  }
  auth_key_->assign(value);
  // @@protoc_insertion_point(field_set_char:packets.Login.auth_key)
}
inline void Login::set_auth_key(const char* value, size_t size) {
  set_has_auth_key();
  if (auth_key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_key_ = new ::std::string;
  }
  auth_key_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:packets.Login.auth_key)
}
inline ::std::string* Login::mutable_auth_key() {
  set_has_auth_key();
  if (auth_key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_key_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:packets.Login.auth_key)
  return auth_key_;
}
inline ::std::string* Login::release_auth_key() {
  clear_has_auth_key();
  if (auth_key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = auth_key_;
    auth_key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Login::set_allocated_auth_key(::std::string* auth_key) {
  if (auth_key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete auth_key_;
  }
  if (auth_key) {
    set_has_auth_key();
    auth_key_ = auth_key;
  } else {
    clear_has_auth_key();
    auth_key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:packets.Login.auth_key)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace packets

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::packets::ID> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::packets::ID>() {
  return ::packets::ID_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_packets_2eproto__INCLUDED
