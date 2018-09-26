/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineVertexInputStateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineVertexInputStateCreateInfo::constructor;

_VkPipelineVertexInputStateCreateInfo::_VkPipelineVertexInputStateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
}

_VkPipelineVertexInputStateCreateInfo::~_VkPipelineVertexInputStateCreateInfo() {
  //printf("VkPipelineVertexInputStateCreateInfo deconstructed!!\n");
}

void _VkPipelineVertexInputStateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineVertexInputStateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineVertexInputStateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("vertexBindingDescriptionCount").ToLocalChecked(), GetvertexBindingDescriptionCount, SetvertexBindingDescriptionCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pVertexBindingDescriptions").ToLocalChecked(), GetpVertexBindingDescriptions, SetpVertexBindingDescriptions, ctor);
  SetPrototypeAccessor(proto, Nan::New("vertexAttributeDescriptionCount").ToLocalChecked(), GetvertexAttributeDescriptionCount, SetvertexAttributeDescriptionCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pVertexAttributeDescriptions").ToLocalChecked(), GetpVertexAttributeDescriptions, SetpVertexAttributeDescriptions, ctor);
  Nan::Set(target, Nan::New("VkPipelineVertexInputStateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPipelineVertexInputStateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineVertexInputStateCreateInfo* self = new _VkPipelineVertexInputStateCreateInfo();
    self->Wrap(info.Holder());
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineVertexInputStateCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetsType) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetsType) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// flags
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::Getflags) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::Setflags) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  self->instance.flags = static_cast<VkPipelineVertexInputStateCreateFlags>((int32_t)value->NumberValue());
}// vertexBindingDescriptionCount
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetvertexBindingDescriptionCount) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vertexBindingDescriptionCount));
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetvertexBindingDescriptionCount) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  self->instance.vertexBindingDescriptionCount = static_cast<uint32_t>(value->NumberValue());
}// pVertexBindingDescriptions
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetpVertexBindingDescriptions) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  if (self->pVertexBindingDescriptions.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pVertexBindingDescriptions);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetpVertexBindingDescriptions) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pVertexBindingDescriptions = obj;
    } else {
      if (!self->pVertexBindingDescriptions.IsEmpty()) self->pVertexBindingDescriptions.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pVertexBindingDescriptions = copyArrayOfV8Objects<VkVertexInputBindingDescription, _VkVertexInputBindingDescription>(value);
  } else {
    self->instance.pVertexBindingDescriptions = nullptr;
  }
}// vertexAttributeDescriptionCount
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetvertexAttributeDescriptionCount) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vertexAttributeDescriptionCount));
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetvertexAttributeDescriptionCount) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  self->instance.vertexAttributeDescriptionCount = static_cast<uint32_t>(value->NumberValue());
}// pVertexAttributeDescriptions
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetpVertexAttributeDescriptions) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  if (self->pVertexAttributeDescriptions.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pVertexAttributeDescriptions);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetpVertexAttributeDescriptions) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pVertexAttributeDescriptions = obj;
    } else {
      if (!self->pVertexAttributeDescriptions.IsEmpty()) self->pVertexAttributeDescriptions.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pVertexAttributeDescriptions = copyArrayOfV8Objects<VkVertexInputAttributeDescription, _VkVertexInputAttributeDescription>(value);
  } else {
    self->instance.pVertexAttributeDescriptions = nullptr;
  }
}