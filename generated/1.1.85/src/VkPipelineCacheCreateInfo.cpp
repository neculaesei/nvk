/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineCacheCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineCacheCreateInfo::constructor;

_VkPipelineCacheCreateInfo::_VkPipelineCacheCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
  
}

_VkPipelineCacheCreateInfo::~_VkPipelineCacheCreateInfo() {
  //printf("VkPipelineCacheCreateInfo deconstructed!!\n");
  
  
  
  
  pInitialData.Reset();
  
}

void _VkPipelineCacheCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineCacheCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineCacheCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("initialDataSize").ToLocalChecked(), GetinitialDataSize, SetinitialDataSize, ctor);
  SetPrototypeAccessor(proto, Nan::New("pInitialData").ToLocalChecked(), GetpInitialData, SetpInitialData, ctor);
  Nan::Set(target, Nan::New("VkPipelineCacheCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineCacheCreateInfo::flush() {
  _VkPipelineCacheCreateInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkPipelineCacheCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineCacheCreateInfo* self = new _VkPipelineCacheCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("initialDataSize").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pInitialData").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineCacheCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineCacheCreateInfo::GetsType) {
  _VkPipelineCacheCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineCacheCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineCacheCreateInfo::SetsType) {
  _VkPipelineCacheCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineCacheCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineCacheCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkPipelineCacheCreateInfo::Getflags) {
  _VkPipelineCacheCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineCacheCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineCacheCreateInfo::Setflags) {
  _VkPipelineCacheCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineCacheCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineCacheCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineCacheCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// initialDataSize
NAN_GETTER(_VkPipelineCacheCreateInfo::GetinitialDataSize) {
  _VkPipelineCacheCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineCacheCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.initialDataSize));
}NAN_SETTER(_VkPipelineCacheCreateInfo::SetinitialDataSize) {
  _VkPipelineCacheCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineCacheCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.initialDataSize = static_cast<size_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineCacheCreateInfo.initialDataSize' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pInitialData
NAN_GETTER(_VkPipelineCacheCreateInfo::GetpInitialData) {
  _VkPipelineCacheCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineCacheCreateInfo>(info.This());
}NAN_SETTER(_VkPipelineCacheCreateInfo::SetpInitialData) {
  _VkPipelineCacheCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineCacheCreateInfo>(info.This());
}