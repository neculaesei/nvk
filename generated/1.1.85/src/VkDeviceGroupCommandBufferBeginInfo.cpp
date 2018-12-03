/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceGroupCommandBufferBeginInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceGroupCommandBufferBeginInfo::constructor;

_VkDeviceGroupCommandBufferBeginInfo::_VkDeviceGroupCommandBufferBeginInfo() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;
  
}

_VkDeviceGroupCommandBufferBeginInfo::~_VkDeviceGroupCommandBufferBeginInfo() {
  //printf("VkDeviceGroupCommandBufferBeginInfo deconstructed!!\n");
  
  
  
}

void _VkDeviceGroupCommandBufferBeginInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceGroupCommandBufferBeginInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceGroupCommandBufferBeginInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceMask").ToLocalChecked(), GetdeviceMask, SetdeviceMask, ctor);
  Nan::Set(target, Nan::New("VkDeviceGroupCommandBufferBeginInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceGroupCommandBufferBeginInfo::flush() {
  _VkDeviceGroupCommandBufferBeginInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceGroupCommandBufferBeginInfo::New) {
  if (info.IsConstructCall()) {
    _VkDeviceGroupCommandBufferBeginInfo* self = new _VkDeviceGroupCommandBufferBeginInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("deviceMask").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceGroupCommandBufferBeginInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceGroupCommandBufferBeginInfo::GetsType) {
  _VkDeviceGroupCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupCommandBufferBeginInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceGroupCommandBufferBeginInfo::SetsType) {
  _VkDeviceGroupCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupCommandBufferBeginInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupCommandBufferBeginInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// deviceMask
NAN_GETTER(_VkDeviceGroupCommandBufferBeginInfo::GetdeviceMask) {
  _VkDeviceGroupCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupCommandBufferBeginInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.deviceMask));
}NAN_SETTER(_VkDeviceGroupCommandBufferBeginInfo::SetdeviceMask) {
  _VkDeviceGroupCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupCommandBufferBeginInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.deviceMask = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupCommandBufferBeginInfo.deviceMask' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}