/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkCommandBufferInheritanceConditionalRenderingInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkCommandBufferInheritanceConditionalRenderingInfoEXT::constructor;

_VkCommandBufferInheritanceConditionalRenderingInfoEXT::_VkCommandBufferInheritanceConditionalRenderingInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT;
  
}

_VkCommandBufferInheritanceConditionalRenderingInfoEXT::~_VkCommandBufferInheritanceConditionalRenderingInfoEXT() {
  //printf("VkCommandBufferInheritanceConditionalRenderingInfoEXT deconstructed!!\n");
  
  
  
}

void _VkCommandBufferInheritanceConditionalRenderingInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkCommandBufferInheritanceConditionalRenderingInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkCommandBufferInheritanceConditionalRenderingInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("conditionalRenderingEnable").ToLocalChecked(), GetconditionalRenderingEnable, SetconditionalRenderingEnable, ctor);
  Nan::Set(target, Nan::New("VkCommandBufferInheritanceConditionalRenderingInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkCommandBufferInheritanceConditionalRenderingInfoEXT::flush() {
  _VkCommandBufferInheritanceConditionalRenderingInfoEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkCommandBufferInheritanceConditionalRenderingInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkCommandBufferInheritanceConditionalRenderingInfoEXT* self = new _VkCommandBufferInheritanceConditionalRenderingInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("conditionalRenderingEnable").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkCommandBufferInheritanceConditionalRenderingInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkCommandBufferInheritanceConditionalRenderingInfoEXT::GetsType) {
  _VkCommandBufferInheritanceConditionalRenderingInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceConditionalRenderingInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkCommandBufferInheritanceConditionalRenderingInfoEXT::SetsType) {
  _VkCommandBufferInheritanceConditionalRenderingInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceConditionalRenderingInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCommandBufferInheritanceConditionalRenderingInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// conditionalRenderingEnable
NAN_GETTER(_VkCommandBufferInheritanceConditionalRenderingInfoEXT::GetconditionalRenderingEnable) {
  _VkCommandBufferInheritanceConditionalRenderingInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceConditionalRenderingInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.conditionalRenderingEnable));
}NAN_SETTER(_VkCommandBufferInheritanceConditionalRenderingInfoEXT::SetconditionalRenderingEnable) {
  _VkCommandBufferInheritanceConditionalRenderingInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceConditionalRenderingInfoEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.conditionalRenderingEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCommandBufferInheritanceConditionalRenderingInfoEXT.conditionalRenderingEnable' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}