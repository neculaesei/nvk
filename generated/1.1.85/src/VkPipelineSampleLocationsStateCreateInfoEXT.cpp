/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineSampleLocationsStateCreateInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineSampleLocationsStateCreateInfoEXT::constructor;

_VkPipelineSampleLocationsStateCreateInfoEXT::_VkPipelineSampleLocationsStateCreateInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;
  
}

_VkPipelineSampleLocationsStateCreateInfoEXT::~_VkPipelineSampleLocationsStateCreateInfoEXT() {
  //printf("VkPipelineSampleLocationsStateCreateInfoEXT deconstructed!!\n");
  
  
  
  
}

void _VkPipelineSampleLocationsStateCreateInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineSampleLocationsStateCreateInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineSampleLocationsStateCreateInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("sampleLocationsEnable").ToLocalChecked(), GetsampleLocationsEnable, SetsampleLocationsEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("sampleLocationsInfo").ToLocalChecked(), GetsampleLocationsInfo, SetsampleLocationsInfo, ctor);
  Nan::Set(target, Nan::New("VkPipelineSampleLocationsStateCreateInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineSampleLocationsStateCreateInfoEXT::flush() {
  _VkPipelineSampleLocationsStateCreateInfoEXT *self = this;
  if (!(self->sampleLocationsInfo.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->sampleLocationsInfo);
    
    _VkSampleLocationsInfoEXT* result = Nan::ObjectWrap::Unwrap<_VkSampleLocationsInfoEXT>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.sampleLocationsInfo = result->instance;
  }
  return true;
}

NAN_METHOD(_VkPipelineSampleLocationsStateCreateInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkPipelineSampleLocationsStateCreateInfoEXT* self = new _VkPipelineSampleLocationsStateCreateInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("sampleLocationsEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("sampleLocationsInfo").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineSampleLocationsStateCreateInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineSampleLocationsStateCreateInfoEXT::GetsType) {
  _VkPipelineSampleLocationsStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineSampleLocationsStateCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineSampleLocationsStateCreateInfoEXT::SetsType) {
  _VkPipelineSampleLocationsStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineSampleLocationsStateCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineSampleLocationsStateCreateInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// sampleLocationsEnable
NAN_GETTER(_VkPipelineSampleLocationsStateCreateInfoEXT::GetsampleLocationsEnable) {
  _VkPipelineSampleLocationsStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineSampleLocationsStateCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sampleLocationsEnable));
}NAN_SETTER(_VkPipelineSampleLocationsStateCreateInfoEXT::SetsampleLocationsEnable) {
  _VkPipelineSampleLocationsStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineSampleLocationsStateCreateInfoEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.sampleLocationsEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineSampleLocationsStateCreateInfoEXT.sampleLocationsEnable' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// sampleLocationsInfo
NAN_GETTER(_VkPipelineSampleLocationsStateCreateInfoEXT::GetsampleLocationsInfo) {
  _VkPipelineSampleLocationsStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineSampleLocationsStateCreateInfoEXT>(info.This());
  if (self->sampleLocationsInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->sampleLocationsInfo);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineSampleLocationsStateCreateInfoEXT::SetsampleLocationsInfo) {
  _VkPipelineSampleLocationsStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineSampleLocationsStateCreateInfoEXT>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkSampleLocationsInfoEXT::constructor)->HasInstance(obj)) {
      self->sampleLocationsInfo.Reset<v8::Object>(value.As<v8::Object>());
      _VkSampleLocationsInfoEXT* inst = Nan::ObjectWrap::Unwrap<_VkSampleLocationsInfoEXT>(obj);
      inst->flush();
      self->instance.sampleLocationsInfo = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSampleLocationsInfoEXT]' for 'VkPipelineSampleLocationsStateCreateInfoEXT.sampleLocationsInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->sampleLocationsInfo.Reset();
    memset(&self->instance.sampleLocationsInfo, 0, sizeof(VkSampleLocationsInfoEXT));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSampleLocationsInfoEXT]' for 'VkPipelineSampleLocationsStateCreateInfoEXT.sampleLocationsInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}