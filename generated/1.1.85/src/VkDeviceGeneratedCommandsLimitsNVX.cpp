/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceGeneratedCommandsLimitsNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceGeneratedCommandsLimitsNVX::constructor;

_VkDeviceGeneratedCommandsLimitsNVX::_VkDeviceGeneratedCommandsLimitsNVX() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX;
  
}

_VkDeviceGeneratedCommandsLimitsNVX::~_VkDeviceGeneratedCommandsLimitsNVX() {
  //printf("VkDeviceGeneratedCommandsLimitsNVX deconstructed!!\n");
  
  
  
  
  
  
  
}

void _VkDeviceGeneratedCommandsLimitsNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceGeneratedCommandsLimitsNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceGeneratedCommandsLimitsNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxIndirectCommandsLayoutTokenCount").ToLocalChecked(), GetmaxIndirectCommandsLayoutTokenCount, SetmaxIndirectCommandsLayoutTokenCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxObjectEntryCounts").ToLocalChecked(), GetmaxObjectEntryCounts, SetmaxObjectEntryCounts, ctor);
  SetPrototypeAccessor(proto, Nan::New("minSequenceCountBufferOffsetAlignment").ToLocalChecked(), GetminSequenceCountBufferOffsetAlignment, SetminSequenceCountBufferOffsetAlignment, ctor);
  SetPrototypeAccessor(proto, Nan::New("minSequenceIndexBufferOffsetAlignment").ToLocalChecked(), GetminSequenceIndexBufferOffsetAlignment, SetminSequenceIndexBufferOffsetAlignment, ctor);
  SetPrototypeAccessor(proto, Nan::New("minCommandsTokenBufferOffsetAlignment").ToLocalChecked(), GetminCommandsTokenBufferOffsetAlignment, SetminCommandsTokenBufferOffsetAlignment, ctor);
  Nan::Set(target, Nan::New("VkDeviceGeneratedCommandsLimitsNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceGeneratedCommandsLimitsNVX::flush() {
  _VkDeviceGeneratedCommandsLimitsNVX *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceGeneratedCommandsLimitsNVX::New) {
  if (info.IsConstructCall()) {
    _VkDeviceGeneratedCommandsLimitsNVX* self = new _VkDeviceGeneratedCommandsLimitsNVX();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("maxIndirectCommandsLayoutTokenCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("maxObjectEntryCounts").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("minSequenceCountBufferOffsetAlignment").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("minSequenceIndexBufferOffsetAlignment").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("minCommandsTokenBufferOffsetAlignment").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceGeneratedCommandsLimitsNVX constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceGeneratedCommandsLimitsNVX::GetsType) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceGeneratedCommandsLimitsNVX::SetsType) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGeneratedCommandsLimitsNVX.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxIndirectCommandsLayoutTokenCount
NAN_GETTER(_VkDeviceGeneratedCommandsLimitsNVX::GetmaxIndirectCommandsLayoutTokenCount) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxIndirectCommandsLayoutTokenCount));
}NAN_SETTER(_VkDeviceGeneratedCommandsLimitsNVX::SetmaxIndirectCommandsLayoutTokenCount) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.maxIndirectCommandsLayoutTokenCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGeneratedCommandsLimitsNVX.maxIndirectCommandsLayoutTokenCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxObjectEntryCounts
NAN_GETTER(_VkDeviceGeneratedCommandsLimitsNVX::GetmaxObjectEntryCounts) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxObjectEntryCounts));
}NAN_SETTER(_VkDeviceGeneratedCommandsLimitsNVX::SetmaxObjectEntryCounts) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.maxObjectEntryCounts = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGeneratedCommandsLimitsNVX.maxObjectEntryCounts' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// minSequenceCountBufferOffsetAlignment
NAN_GETTER(_VkDeviceGeneratedCommandsLimitsNVX::GetminSequenceCountBufferOffsetAlignment) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minSequenceCountBufferOffsetAlignment));
}NAN_SETTER(_VkDeviceGeneratedCommandsLimitsNVX::SetminSequenceCountBufferOffsetAlignment) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.minSequenceCountBufferOffsetAlignment = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGeneratedCommandsLimitsNVX.minSequenceCountBufferOffsetAlignment' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// minSequenceIndexBufferOffsetAlignment
NAN_GETTER(_VkDeviceGeneratedCommandsLimitsNVX::GetminSequenceIndexBufferOffsetAlignment) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minSequenceIndexBufferOffsetAlignment));
}NAN_SETTER(_VkDeviceGeneratedCommandsLimitsNVX::SetminSequenceIndexBufferOffsetAlignment) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.minSequenceIndexBufferOffsetAlignment = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGeneratedCommandsLimitsNVX.minSequenceIndexBufferOffsetAlignment' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// minCommandsTokenBufferOffsetAlignment
NAN_GETTER(_VkDeviceGeneratedCommandsLimitsNVX::GetminCommandsTokenBufferOffsetAlignment) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minCommandsTokenBufferOffsetAlignment));
}NAN_SETTER(_VkDeviceGeneratedCommandsLimitsNVX::SetminCommandsTokenBufferOffsetAlignment) {
  _VkDeviceGeneratedCommandsLimitsNVX *self = Nan::ObjectWrap::Unwrap<_VkDeviceGeneratedCommandsLimitsNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.minCommandsTokenBufferOffsetAlignment = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGeneratedCommandsLimitsNVX.minCommandsTokenBufferOffsetAlignment' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}