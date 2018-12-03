/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineShaderStageCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineShaderStageCreateInfo::constructor;

_VkPipelineShaderStageCreateInfo::_VkPipelineShaderStageCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
  
}

_VkPipelineShaderStageCreateInfo::~_VkPipelineShaderStageCreateInfo() {
  //printf("VkPipelineShaderStageCreateInfo deconstructed!!\n");
  
  
  
  
  
  pName.Reset();
  
  pSpecializationInfo.Reset();
  
}

void _VkPipelineShaderStageCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineShaderStageCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineShaderStageCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("stage").ToLocalChecked(), Getstage, Setstage, ctor);
  SetPrototypeAccessor(proto, Nan::New("module").ToLocalChecked(), Getmodule, Setmodule, ctor);
  SetPrototypeAccessor(proto, Nan::New("pName").ToLocalChecked(), GetpName, SetpName, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSpecializationInfo").ToLocalChecked(), GetpSpecializationInfo, SetpSpecializationInfo, ctor);
  Nan::Set(target, Nan::New("VkPipelineShaderStageCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineShaderStageCreateInfo::flush() {
  _VkPipelineShaderStageCreateInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkPipelineShaderStageCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineShaderStageCreateInfo* self = new _VkPipelineShaderStageCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("stage").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("module").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pName").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pSpecializationInfo").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineShaderStageCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineShaderStageCreateInfo::GetsType) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineShaderStageCreateInfo::SetsType) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineShaderStageCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkPipelineShaderStageCreateInfo::Getflags) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineShaderStageCreateInfo::Setflags) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineShaderStageCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineShaderStageCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// stage
NAN_GETTER(_VkPipelineShaderStageCreateInfo::Getstage) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stage));
}NAN_SETTER(_VkPipelineShaderStageCreateInfo::Setstage) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.stage = static_cast<VkShaderStageFlagBits>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineShaderStageCreateInfo.stage' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// module
NAN_GETTER(_VkPipelineShaderStageCreateInfo::Getmodule) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  if (self->module.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->module);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineShaderStageCreateInfo::Setmodule) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkShaderModule::constructor)->HasInstance(obj)) {
      self->module.Reset<v8::Object>(value.As<v8::Object>());
      _VkShaderModule* inst = Nan::ObjectWrap::Unwrap<_VkShaderModule>(obj);
      ;
      self->instance.module = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkShaderModule]' for 'VkPipelineShaderStageCreateInfo.module' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->module.Reset();
    self->instance.module = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkShaderModule]' for 'VkPipelineShaderStageCreateInfo.module' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pName
NAN_GETTER(_VkPipelineShaderStageCreateInfo::GetpName) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  if (self->pName.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::String> str = Nan::New(self->pName);
    info.GetReturnValue().Set(str);
  }
}NAN_SETTER(_VkPipelineShaderStageCreateInfo::SetpName) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  if (value->IsString()) {
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
    self->pName = str;
    // free previous
    if (self->instance.pName) {
      delete[] self->instance.pName;
    }
    self->instance.pName = copyV8String(value);
  } else if (value->IsNull()) {
    self->instance.pName = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'String' for 'VkPipelineShaderStageCreateInfo.pName' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pSpecializationInfo
NAN_GETTER(_VkPipelineShaderStageCreateInfo::GetpSpecializationInfo) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  if (self->pSpecializationInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSpecializationInfo);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineShaderStageCreateInfo::SetpSpecializationInfo) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkSpecializationInfo::constructor)->HasInstance(obj)) {
      self->pSpecializationInfo.Reset<v8::Object>(value.As<v8::Object>());
      _VkSpecializationInfo* inst = Nan::ObjectWrap::Unwrap<_VkSpecializationInfo>(obj);
      inst->flush();
      self->instance.pSpecializationInfo = &inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSpecializationInfo]' for 'VkPipelineShaderStageCreateInfo.pSpecializationInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->pSpecializationInfo.Reset();
    self->instance.pSpecializationInfo = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSpecializationInfo]' for 'VkPipelineShaderStageCreateInfo.pSpecializationInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}