/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkAttachmentDescription2KHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkAttachmentDescription2KHR::constructor;

_VkAttachmentDescription2KHR::_VkAttachmentDescription2KHR() {
  instance.sType = VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR;
  
}

_VkAttachmentDescription2KHR::~_VkAttachmentDescription2KHR() {
  //printf("VkAttachmentDescription2KHR deconstructed!!\n");
  
  
  
  
  
  
  
  
  
  
  
}

void _VkAttachmentDescription2KHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkAttachmentDescription2KHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkAttachmentDescription2KHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("format").ToLocalChecked(), Getformat, Setformat, ctor);
  SetPrototypeAccessor(proto, Nan::New("samples").ToLocalChecked(), Getsamples, Setsamples, ctor);
  SetPrototypeAccessor(proto, Nan::New("loadOp").ToLocalChecked(), GetloadOp, SetloadOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("storeOp").ToLocalChecked(), GetstoreOp, SetstoreOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("stencilLoadOp").ToLocalChecked(), GetstencilLoadOp, SetstencilLoadOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("stencilStoreOp").ToLocalChecked(), GetstencilStoreOp, SetstencilStoreOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("initialLayout").ToLocalChecked(), GetinitialLayout, SetinitialLayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("finalLayout").ToLocalChecked(), GetfinalLayout, SetfinalLayout, ctor);
  Nan::Set(target, Nan::New("VkAttachmentDescription2KHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkAttachmentDescription2KHR::flush() {
  _VkAttachmentDescription2KHR *self = this;
  
  return true;
}

NAN_METHOD(_VkAttachmentDescription2KHR::New) {
  if (info.IsConstructCall()) {
    _VkAttachmentDescription2KHR* self = new _VkAttachmentDescription2KHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("format").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("samples").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("loadOp").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("storeOp").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("stencilLoadOp").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("stencilStoreOp").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("initialLayout").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("finalLayout").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkAttachmentDescription2KHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkAttachmentDescription2KHR::GetsType) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkAttachmentDescription2KHR::SetsType) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentDescription2KHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkAttachmentDescription2KHR::Getflags) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkAttachmentDescription2KHR::Setflags) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkAttachmentDescriptionFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentDescription2KHR.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// format
NAN_GETTER(_VkAttachmentDescription2KHR::Getformat) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.format));
}NAN_SETTER(_VkAttachmentDescription2KHR::Setformat) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.format = static_cast<VkFormat>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentDescription2KHR.format' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// samples
NAN_GETTER(_VkAttachmentDescription2KHR::Getsamples) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.samples));
}NAN_SETTER(_VkAttachmentDescription2KHR::Setsamples) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.samples = static_cast<VkSampleCountFlagBits>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentDescription2KHR.samples' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// loadOp
NAN_GETTER(_VkAttachmentDescription2KHR::GetloadOp) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.loadOp));
}NAN_SETTER(_VkAttachmentDescription2KHR::SetloadOp) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.loadOp = static_cast<VkAttachmentLoadOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentDescription2KHR.loadOp' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// storeOp
NAN_GETTER(_VkAttachmentDescription2KHR::GetstoreOp) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.storeOp));
}NAN_SETTER(_VkAttachmentDescription2KHR::SetstoreOp) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.storeOp = static_cast<VkAttachmentStoreOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentDescription2KHR.storeOp' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// stencilLoadOp
NAN_GETTER(_VkAttachmentDescription2KHR::GetstencilLoadOp) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stencilLoadOp));
}NAN_SETTER(_VkAttachmentDescription2KHR::SetstencilLoadOp) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.stencilLoadOp = static_cast<VkAttachmentLoadOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentDescription2KHR.stencilLoadOp' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// stencilStoreOp
NAN_GETTER(_VkAttachmentDescription2KHR::GetstencilStoreOp) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stencilStoreOp));
}NAN_SETTER(_VkAttachmentDescription2KHR::SetstencilStoreOp) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.stencilStoreOp = static_cast<VkAttachmentStoreOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentDescription2KHR.stencilStoreOp' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// initialLayout
NAN_GETTER(_VkAttachmentDescription2KHR::GetinitialLayout) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.initialLayout));
}NAN_SETTER(_VkAttachmentDescription2KHR::SetinitialLayout) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.initialLayout = static_cast<VkImageLayout>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentDescription2KHR.initialLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// finalLayout
NAN_GETTER(_VkAttachmentDescription2KHR::GetfinalLayout) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.finalLayout));
}NAN_SETTER(_VkAttachmentDescription2KHR::SetfinalLayout) {
  _VkAttachmentDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.finalLayout = static_cast<VkImageLayout>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentDescription2KHR.finalLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}