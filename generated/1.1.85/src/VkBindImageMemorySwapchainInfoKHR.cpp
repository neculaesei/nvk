/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkBindImageMemorySwapchainInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkBindImageMemorySwapchainInfoKHR::constructor;

_VkBindImageMemorySwapchainInfoKHR::_VkBindImageMemorySwapchainInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;
  
}

_VkBindImageMemorySwapchainInfoKHR::~_VkBindImageMemorySwapchainInfoKHR() {
  //printf("VkBindImageMemorySwapchainInfoKHR deconstructed!!\n");
  
  
  
  
}

void _VkBindImageMemorySwapchainInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBindImageMemorySwapchainInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBindImageMemorySwapchainInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("swapchain").ToLocalChecked(), Getswapchain, Setswapchain, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageIndex").ToLocalChecked(), GetimageIndex, SetimageIndex, ctor);
  Nan::Set(target, Nan::New("VkBindImageMemorySwapchainInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkBindImageMemorySwapchainInfoKHR::flush() {
  _VkBindImageMemorySwapchainInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkBindImageMemorySwapchainInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkBindImageMemorySwapchainInfoKHR* self = new _VkBindImageMemorySwapchainInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("swapchain").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("imageIndex").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBindImageMemorySwapchainInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkBindImageMemorySwapchainInfoKHR::GetsType) {
  _VkBindImageMemorySwapchainInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemorySwapchainInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBindImageMemorySwapchainInfoKHR::SetsType) {
  _VkBindImageMemorySwapchainInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemorySwapchainInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindImageMemorySwapchainInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// swapchain
NAN_GETTER(_VkBindImageMemorySwapchainInfoKHR::Getswapchain) {
  _VkBindImageMemorySwapchainInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemorySwapchainInfoKHR>(info.This());
  if (self->swapchain.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->swapchain);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindImageMemorySwapchainInfoKHR::Setswapchain) {
  _VkBindImageMemorySwapchainInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemorySwapchainInfoKHR>(info.This());
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
    std::string msg = "Expected '[object VkSwapchainKHR]' for 'VkBindImageMemorySwapchainInfoKHR.swapchain' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->swapchain.Reset();
    self->instance.swapchain = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSwapchainKHR]' for 'VkBindImageMemorySwapchainInfoKHR.swapchain' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// imageIndex
NAN_GETTER(_VkBindImageMemorySwapchainInfoKHR::GetimageIndex) {
  _VkBindImageMemorySwapchainInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemorySwapchainInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageIndex));
}NAN_SETTER(_VkBindImageMemorySwapchainInfoKHR::SetimageIndex) {
  _VkBindImageMemorySwapchainInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemorySwapchainInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.imageIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindImageMemorySwapchainInfoKHR.imageIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}