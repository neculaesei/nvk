/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkSubpassBeginInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSubpassBeginInfoKHR::constructor;

_VkSubpassBeginInfoKHR::_VkSubpassBeginInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR;
  
}

_VkSubpassBeginInfoKHR::~_VkSubpassBeginInfoKHR() {
  //printf("VkSubpassBeginInfoKHR deconstructed!!\n");
  
  
  
}

void _VkSubpassBeginInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSubpassBeginInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSubpassBeginInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("contents").ToLocalChecked(), Getcontents, Setcontents, ctor);
  Nan::Set(target, Nan::New("VkSubpassBeginInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSubpassBeginInfoKHR::flush() {
  _VkSubpassBeginInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkSubpassBeginInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkSubpassBeginInfoKHR* self = new _VkSubpassBeginInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("contents").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSubpassBeginInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkSubpassBeginInfoKHR::GetsType) {
  _VkSubpassBeginInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassBeginInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkSubpassBeginInfoKHR::SetsType) {
  _VkSubpassBeginInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassBeginInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSubpassBeginInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// contents
NAN_GETTER(_VkSubpassBeginInfoKHR::Getcontents) {
  _VkSubpassBeginInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassBeginInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.contents));
}NAN_SETTER(_VkSubpassBeginInfoKHR::Setcontents) {
  _VkSubpassBeginInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassBeginInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.contents = static_cast<VkSubpassContents>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSubpassBeginInfoKHR.contents' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}