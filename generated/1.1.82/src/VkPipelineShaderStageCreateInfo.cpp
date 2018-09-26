/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
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

NAN_METHOD(_VkPipelineShaderStageCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineShaderStageCreateInfo* self = new _VkPipelineShaderStageCreateInfo();
    self->Wrap(info.Holder());
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
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// flags
NAN_GETTER(_VkPipelineShaderStageCreateInfo::Getflags) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineShaderStageCreateInfo::Setflags) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  self->instance.flags = static_cast<VkPipelineShaderStageCreateFlags>((int32_t)value->NumberValue());
}// stage
NAN_GETTER(_VkPipelineShaderStageCreateInfo::Getstage) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stage));
}NAN_SETTER(_VkPipelineShaderStageCreateInfo::Setstage) {
  _VkPipelineShaderStageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(info.This());
  self->instance.stage = static_cast<VkShaderStageFlagBits>((int32_t)value->NumberValue());
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
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->module = obj;
  } else {
    //self->module = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkShaderModule* obj = Nan::ObjectWrap::Unwrap<_VkShaderModule>(value->ToObject());
    self->instance.module = obj->instance;
  } else {
    self->instance.module = VK_NULL_HANDLE;
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
    self->instance.pName = copyV8String(value);
  } else {
    self->instance.pName = nullptr;
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
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pSpecializationInfo = obj;
  } else {
    //self->pSpecializationInfo = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkSpecializationInfo* obj = Nan::ObjectWrap::Unwrap<_VkSpecializationInfo>(value->ToObject());
    self->instance.pSpecializationInfo = &obj->instance;
  } else {
    self->instance.pSpecializationInfo = nullptr;
  }
}