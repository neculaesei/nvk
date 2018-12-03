/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkShaderModuleValidationCacheCreateInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkShaderModuleValidationCacheCreateInfoEXT::constructor;

_VkShaderModuleValidationCacheCreateInfoEXT::_VkShaderModuleValidationCacheCreateInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT;
  
}

_VkShaderModuleValidationCacheCreateInfoEXT::~_VkShaderModuleValidationCacheCreateInfoEXT() {
  //printf("VkShaderModuleValidationCacheCreateInfoEXT deconstructed!!\n");
  
  
  
}

void _VkShaderModuleValidationCacheCreateInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkShaderModuleValidationCacheCreateInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkShaderModuleValidationCacheCreateInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("validationCache").ToLocalChecked(), GetvalidationCache, SetvalidationCache, ctor);
  Nan::Set(target, Nan::New("VkShaderModuleValidationCacheCreateInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkShaderModuleValidationCacheCreateInfoEXT::flush() {
  _VkShaderModuleValidationCacheCreateInfoEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkShaderModuleValidationCacheCreateInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkShaderModuleValidationCacheCreateInfoEXT* self = new _VkShaderModuleValidationCacheCreateInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("validationCache").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkShaderModuleValidationCacheCreateInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkShaderModuleValidationCacheCreateInfoEXT::GetsType) {
  _VkShaderModuleValidationCacheCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleValidationCacheCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkShaderModuleValidationCacheCreateInfoEXT::SetsType) {
  _VkShaderModuleValidationCacheCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleValidationCacheCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkShaderModuleValidationCacheCreateInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// validationCache
NAN_GETTER(_VkShaderModuleValidationCacheCreateInfoEXT::GetvalidationCache) {
  _VkShaderModuleValidationCacheCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleValidationCacheCreateInfoEXT>(info.This());
  if (self->validationCache.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->validationCache);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkShaderModuleValidationCacheCreateInfoEXT::SetvalidationCache) {
  _VkShaderModuleValidationCacheCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleValidationCacheCreateInfoEXT>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkValidationCacheEXT::constructor)->HasInstance(obj)) {
      self->validationCache.Reset<v8::Object>(value.As<v8::Object>());
      _VkValidationCacheEXT* inst = Nan::ObjectWrap::Unwrap<_VkValidationCacheEXT>(obj);
      ;
      self->instance.validationCache = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkValidationCacheEXT]' for 'VkShaderModuleValidationCacheCreateInfoEXT.validationCache' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->validationCache.Reset();
    self->instance.validationCache = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkValidationCacheEXT]' for 'VkShaderModuleValidationCacheCreateInfoEXT.validationCache' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}