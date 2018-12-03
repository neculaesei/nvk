/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkAcquireNextImageInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkAcquireNextImageInfoKHR::constructor;

_VkAcquireNextImageInfoKHR::_VkAcquireNextImageInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR;
  
}

_VkAcquireNextImageInfoKHR::~_VkAcquireNextImageInfoKHR() {
  //printf("VkAcquireNextImageInfoKHR deconstructed!!\n");
  
  
  
  
  
  
  
}

void _VkAcquireNextImageInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkAcquireNextImageInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkAcquireNextImageInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("swapchain").ToLocalChecked(), Getswapchain, Setswapchain, ctor);
  SetPrototypeAccessor(proto, Nan::New("timeout").ToLocalChecked(), Gettimeout, Settimeout, ctor);
  SetPrototypeAccessor(proto, Nan::New("semaphore").ToLocalChecked(), Getsemaphore, Setsemaphore, ctor);
  SetPrototypeAccessor(proto, Nan::New("fence").ToLocalChecked(), Getfence, Setfence, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceMask").ToLocalChecked(), GetdeviceMask, SetdeviceMask, ctor);
  Nan::Set(target, Nan::New("VkAcquireNextImageInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkAcquireNextImageInfoKHR::flush() {
  _VkAcquireNextImageInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkAcquireNextImageInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkAcquireNextImageInfoKHR* self = new _VkAcquireNextImageInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("swapchain").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("timeout").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("semaphore").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("fence").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("deviceMask").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkAcquireNextImageInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkAcquireNextImageInfoKHR::GetsType) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkAcquireNextImageInfoKHR::SetsType) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAcquireNextImageInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// swapchain
NAN_GETTER(_VkAcquireNextImageInfoKHR::Getswapchain) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  if (self->swapchain.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->swapchain);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkAcquireNextImageInfoKHR::Setswapchain) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkSwapchainKHR::constructor)->HasInstance(obj)) {
      self->swapchain.Reset<v8::Object>(value.As<v8::Object>());
      _VkSwapchainKHR* inst = Nan::ObjectWrap::Unwrap<_VkSwapchainKHR>(obj);
      ;
      self->instance.swapchain = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSwapchainKHR]' for 'VkAcquireNextImageInfoKHR.swapchain' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->swapchain.Reset();
    self->instance.swapchain = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSwapchainKHR]' for 'VkAcquireNextImageInfoKHR.swapchain' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// timeout
NAN_GETTER(_VkAcquireNextImageInfoKHR::Gettimeout) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.timeout));
}NAN_SETTER(_VkAcquireNextImageInfoKHR::Settimeout) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.timeout = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAcquireNextImageInfoKHR.timeout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// semaphore
NAN_GETTER(_VkAcquireNextImageInfoKHR::Getsemaphore) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  if (self->semaphore.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->semaphore);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkAcquireNextImageInfoKHR::Setsemaphore) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkSemaphore::constructor)->HasInstance(obj)) {
      self->semaphore.Reset<v8::Object>(value.As<v8::Object>());
      _VkSemaphore* inst = Nan::ObjectWrap::Unwrap<_VkSemaphore>(obj);
      ;
      self->instance.semaphore = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSemaphore]' for 'VkAcquireNextImageInfoKHR.semaphore' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->semaphore.Reset();
    self->instance.semaphore = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSemaphore]' for 'VkAcquireNextImageInfoKHR.semaphore' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// fence
NAN_GETTER(_VkAcquireNextImageInfoKHR::Getfence) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  if (self->fence.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->fence);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkAcquireNextImageInfoKHR::Setfence) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
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
    std::string msg = "Expected '[object VkFence]' for 'VkAcquireNextImageInfoKHR.fence' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->fence.Reset();
    self->instance.fence = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkFence]' for 'VkAcquireNextImageInfoKHR.fence' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// deviceMask
NAN_GETTER(_VkAcquireNextImageInfoKHR::GetdeviceMask) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.deviceMask));
}NAN_SETTER(_VkAcquireNextImageInfoKHR::SetdeviceMask) {
  _VkAcquireNextImageInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkAcquireNextImageInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.deviceMask = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAcquireNextImageInfoKHR.deviceMask' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}