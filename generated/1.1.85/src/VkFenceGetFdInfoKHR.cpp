/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkFenceGetFdInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkFenceGetFdInfoKHR::constructor;

_VkFenceGetFdInfoKHR::_VkFenceGetFdInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR;
  
}

_VkFenceGetFdInfoKHR::~_VkFenceGetFdInfoKHR() {
  //printf("VkFenceGetFdInfoKHR deconstructed!!\n");
  
  
  
  
}

void _VkFenceGetFdInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkFenceGetFdInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkFenceGetFdInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("fence").ToLocalChecked(), Getfence, Setfence, ctor);
  SetPrototypeAccessor(proto, Nan::New("handleType").ToLocalChecked(), GethandleType, SethandleType, ctor);
  Nan::Set(target, Nan::New("VkFenceGetFdInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkFenceGetFdInfoKHR::flush() {
  _VkFenceGetFdInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkFenceGetFdInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkFenceGetFdInfoKHR* self = new _VkFenceGetFdInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("fence").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("handleType").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkFenceGetFdInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkFenceGetFdInfoKHR::GetsType) {
  _VkFenceGetFdInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkFenceGetFdInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkFenceGetFdInfoKHR::SetsType) {
  _VkFenceGetFdInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkFenceGetFdInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkFenceGetFdInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// fence
NAN_GETTER(_VkFenceGetFdInfoKHR::Getfence) {
  _VkFenceGetFdInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkFenceGetFdInfoKHR>(info.This());
  if (self->fence.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->fence);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkFenceGetFdInfoKHR::Setfence) {
  _VkFenceGetFdInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkFenceGetFdInfoKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkFence::constructor)->HasInstance(obj)) {
      self->fence.Reset<v8::Object>(value.As<v8::Object>());
      _VkFence* inst = Nan::ObjectWrap::Unwrap<_VkFence>(obj);
      ;
      self->instance.fence = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkFence]' for 'VkFenceGetFdInfoKHR.fence' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->fence.Reset();
    self->instance.fence = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkFence]' for 'VkFenceGetFdInfoKHR.fence' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// handleType
NAN_GETTER(_VkFenceGetFdInfoKHR::GethandleType) {
  _VkFenceGetFdInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkFenceGetFdInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.handleType));
}NAN_SETTER(_VkFenceGetFdInfoKHR::SethandleType) {
  _VkFenceGetFdInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkFenceGetFdInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.handleType = static_cast<VkExternalFenceHandleTypeFlagBits>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkFenceGetFdInfoKHR.handleType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}