/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceGroupBindSparseInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceGroupBindSparseInfo::constructor;

_VkDeviceGroupBindSparseInfo::_VkDeviceGroupBindSparseInfo() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO;
  
}

_VkDeviceGroupBindSparseInfo::~_VkDeviceGroupBindSparseInfo() {
  //printf("VkDeviceGroupBindSparseInfo deconstructed!!\n");
  
  
  
  
}

void _VkDeviceGroupBindSparseInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceGroupBindSparseInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceGroupBindSparseInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("resourceDeviceIndex").ToLocalChecked(), GetresourceDeviceIndex, SetresourceDeviceIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryDeviceIndex").ToLocalChecked(), GetmemoryDeviceIndex, SetmemoryDeviceIndex, ctor);
  Nan::Set(target, Nan::New("VkDeviceGroupBindSparseInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceGroupBindSparseInfo::flush() {
  _VkDeviceGroupBindSparseInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceGroupBindSparseInfo::New) {
  if (info.IsConstructCall()) {
    _VkDeviceGroupBindSparseInfo* self = new _VkDeviceGroupBindSparseInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("resourceDeviceIndex").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("memoryDeviceIndex").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceGroupBindSparseInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceGroupBindSparseInfo::GetsType) {
  _VkDeviceGroupBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupBindSparseInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceGroupBindSparseInfo::SetsType) {
  _VkDeviceGroupBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupBindSparseInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupBindSparseInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// resourceDeviceIndex
NAN_GETTER(_VkDeviceGroupBindSparseInfo::GetresourceDeviceIndex) {
  _VkDeviceGroupBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupBindSparseInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.resourceDeviceIndex));
}NAN_SETTER(_VkDeviceGroupBindSparseInfo::SetresourceDeviceIndex) {
  _VkDeviceGroupBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupBindSparseInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.resourceDeviceIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupBindSparseInfo.resourceDeviceIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// memoryDeviceIndex
NAN_GETTER(_VkDeviceGroupBindSparseInfo::GetmemoryDeviceIndex) {
  _VkDeviceGroupBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupBindSparseInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.memoryDeviceIndex));
}NAN_SETTER(_VkDeviceGroupBindSparseInfo::SetmemoryDeviceIndex) {
  _VkDeviceGroupBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupBindSparseInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.memoryDeviceIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupBindSparseInfo.memoryDeviceIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}