/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include <string.h>
#include "index.h"
#include "VkPipelineColorBlendStateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineColorBlendStateCreateInfo::constructor;

_VkPipelineColorBlendStateCreateInfo::_VkPipelineColorBlendStateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
}

_VkPipelineColorBlendStateCreateInfo::~_VkPipelineColorBlendStateCreateInfo() {
  //printf("VkPipelineColorBlendStateCreateInfo deconstructed!!\n");
}

void _VkPipelineColorBlendStateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineColorBlendStateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineColorBlendStateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("logicOpEnable").ToLocalChecked(), GetlogicOpEnable, SetlogicOpEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("logicOp").ToLocalChecked(), GetlogicOp, SetlogicOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("attachmentCount").ToLocalChecked(), GetattachmentCount, SetattachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAttachments").ToLocalChecked(), GetpAttachments, SetpAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("blendConstants").ToLocalChecked(), GetblendConstants, SetblendConstants, ctor);
  Nan::Set(target, Nan::New("VkPipelineColorBlendStateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPipelineColorBlendStateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineColorBlendStateCreateInfo* self = new _VkPipelineColorBlendStateCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("logicOpEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("logicOp").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("attachmentCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pAttachments").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("blendConstants").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineColorBlendStateCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineColorBlendStateCreateInfo::GetsType) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineColorBlendStateCreateInfo::SetsType) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendStateCreateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkPipelineColorBlendStateCreateInfo::GetpNext) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
}NAN_SETTER(_VkPipelineColorBlendStateCreateInfo::SetpNext) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkPipelineColorBlendStateCreateInfo::Getflags) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineColorBlendStateCreateInfo::Setflags) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineColorBlendStateCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendStateCreateInfo.flags'");
  }
}// logicOpEnable
NAN_GETTER(_VkPipelineColorBlendStateCreateInfo::GetlogicOpEnable) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.logicOpEnable));
}NAN_SETTER(_VkPipelineColorBlendStateCreateInfo::SetlogicOpEnable) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.logicOpEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendStateCreateInfo.logicOpEnable'");
  }
}// logicOp
NAN_GETTER(_VkPipelineColorBlendStateCreateInfo::GetlogicOp) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.logicOp));
}NAN_SETTER(_VkPipelineColorBlendStateCreateInfo::SetlogicOp) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.logicOp = static_cast<VkLogicOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendStateCreateInfo.logicOp'");
  }
}// attachmentCount
NAN_GETTER(_VkPipelineColorBlendStateCreateInfo::GetattachmentCount) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.attachmentCount));
}NAN_SETTER(_VkPipelineColorBlendStateCreateInfo::SetattachmentCount) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.attachmentCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendStateCreateInfo.attachmentCount'");
  }
}// pAttachments
NAN_GETTER(_VkPipelineColorBlendStateCreateInfo::GetpAttachments) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  if (self->pAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineColorBlendStateCreateInfo::SetpAttachments) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pAttachments.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pAttachments.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkPipelineColorBlendAttachmentState]' for 'VkPipelineColorBlendStateCreateInfo.pAttachments'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pAttachments = copyArrayOfV8Objects<VkPipelineColorBlendAttachmentState, _VkPipelineColorBlendAttachmentState>(value);
  } else if (value->IsNull()) {
    self->instance.pAttachments = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkPipelineColorBlendAttachmentState]' for 'VkPipelineColorBlendStateCreateInfo.pAttachments'");
  }
}// blendConstants
NAN_GETTER(_VkPipelineColorBlendStateCreateInfo::GetblendConstants) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  if (self->blendConstants.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->blendConstants));
  }
}NAN_SETTER(_VkPipelineColorBlendStateCreateInfo::SetblendConstants) {
  _VkPipelineColorBlendStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->blendConstants.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->blendConstants.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Array' for 'VkPipelineColorBlendStateCreateInfo.blendConstants'");
    }
  
  // vulkan
  if (value->IsArray()) {
    std::vector<float> arr = createArrayOfV8Numbers<float>(value);
    memcpy(self->instance.blendConstants, arr.data(), sizeof(float) * 4);
  } else if (value->IsNull()) {
    memset(&self->instance.blendConstants, 0, sizeof(float));
  } else {
    return Nan::ThrowTypeError("Expected 'Array' for 'VkPipelineColorBlendStateCreateInfo.blendConstants'");
  }
}