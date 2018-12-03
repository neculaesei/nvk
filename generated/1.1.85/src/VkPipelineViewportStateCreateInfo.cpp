/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineViewportStateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineViewportStateCreateInfo::constructor;

_VkPipelineViewportStateCreateInfo::_VkPipelineViewportStateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
  vpViewports = new std::vector<VkViewport>;
  vpScissors = new std::vector<VkRect2D>;
  
}

_VkPipelineViewportStateCreateInfo::~_VkPipelineViewportStateCreateInfo() {
  //printf("VkPipelineViewportStateCreateInfo deconstructed!!\n");
  
  
  
  
  vpViewports->clear();
  delete vpViewports;
  
  pViewports.Reset();
  
  
  vpScissors->clear();
  delete vpScissors;
  
  pScissors.Reset();
  
}

void _VkPipelineViewportStateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineViewportStateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineViewportStateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("viewportCount").ToLocalChecked(), GetviewportCount, SetviewportCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pViewports").ToLocalChecked(), GetpViewports, SetpViewports, ctor);
  SetPrototypeAccessor(proto, Nan::New("scissorCount").ToLocalChecked(), GetscissorCount, SetscissorCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pScissors").ToLocalChecked(), GetpScissors, SetpScissors, ctor);
  Nan::Set(target, Nan::New("VkPipelineViewportStateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineViewportStateCreateInfo::flush() {
  _VkPipelineViewportStateCreateInfo *self = this;
  if (!(self->pViewports.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pViewports);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.viewportCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'viewportCount' for 'VkPipelineViewportStateCreateInfo.pViewports'");
      return false;
    }
    std::vector<VkViewport>* data = self->vpViewports;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkViewport::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkViewport]' for 'VkPipelineViewportStateCreateInfo.pViewports' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkViewport* result = Nan::ObjectWrap::Unwrap<_VkViewport>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pViewports = data->data();
  }if (!(self->pScissors.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pScissors);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.scissorCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'scissorCount' for 'VkPipelineViewportStateCreateInfo.pScissors'");
      return false;
    }
    std::vector<VkRect2D>* data = self->vpScissors;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkRect2D::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkPipelineViewportStateCreateInfo.pScissors' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkRect2D* result = Nan::ObjectWrap::Unwrap<_VkRect2D>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pScissors = data->data();
  }
  return true;
}

NAN_METHOD(_VkPipelineViewportStateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineViewportStateCreateInfo* self = new _VkPipelineViewportStateCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("viewportCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pViewports").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("scissorCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pScissors").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineViewportStateCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetsType) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetsType) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportStateCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkPipelineViewportStateCreateInfo::Getflags) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::Setflags) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineViewportStateCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportStateCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// viewportCount
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetviewportCount) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.viewportCount));
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetviewportCount) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.viewportCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportStateCreateInfo.viewportCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pViewports
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetpViewports) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (self->pViewports.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pViewports);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetpViewports) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pViewports.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pViewports.Reset();
      self->instance.pViewports = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkViewport]' for 'VkPipelineViewportStateCreateInfo.pViewports' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pViewports = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkViewport]' for 'VkPipelineViewportStateCreateInfo.pViewports' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// scissorCount
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetscissorCount) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.scissorCount));
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetscissorCount) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.scissorCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportStateCreateInfo.scissorCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pScissors
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetpScissors) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (self->pScissors.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pScissors);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetpScissors) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pScissors.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pScissors.Reset();
      self->instance.pScissors = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkPipelineViewportStateCreateInfo.pScissors' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pScissors = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkPipelineViewportStateCreateInfo.pScissors' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}