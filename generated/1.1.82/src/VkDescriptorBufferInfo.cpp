/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorBufferInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorBufferInfo::constructor;

_VkDescriptorBufferInfo::_VkDescriptorBufferInfo() {
  
}

_VkDescriptorBufferInfo::~_VkDescriptorBufferInfo() {
  //printf("VkDescriptorBufferInfo deconstructed!!\n");
}

void _VkDescriptorBufferInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorBufferInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorBufferInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("buffer").ToLocalChecked(), Getbuffer, Setbuffer, ctor);
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("range").ToLocalChecked(), Getrange, Setrange, ctor);
  Nan::Set(target, Nan::New("VkDescriptorBufferInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDescriptorBufferInfo::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorBufferInfo* self = new _VkDescriptorBufferInfo();
    self->Wrap(info.Holder());
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorBufferInfo constructor cannot be invoked without 'new'");
  }
};

// buffer
NAN_GETTER(_VkDescriptorBufferInfo::Getbuffer) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  if (self->buffer.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->buffer);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorBufferInfo::Setbuffer) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->buffer = obj;
  } else {
    //self->buffer = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkBuffer* obj = Nan::ObjectWrap::Unwrap<_VkBuffer>(value->ToObject());
    self->instance.buffer = obj->instance;
  } else {
    self->instance.buffer = VK_NULL_HANDLE;
  }
}// offset
NAN_GETTER(_VkDescriptorBufferInfo::Getoffset) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.offset));
}NAN_SETTER(_VkDescriptorBufferInfo::Setoffset) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  self->instance.offset = static_cast<uint64_t>(value->NumberValue());
}// range
NAN_GETTER(_VkDescriptorBufferInfo::Getrange) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.range));
}NAN_SETTER(_VkDescriptorBufferInfo::Setrange) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  self->instance.range = static_cast<uint64_t>(value->NumberValue());
}