/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkImageFormatListCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkImageFormatListCreateInfoKHR::constructor;

_VkImageFormatListCreateInfoKHR::_VkImageFormatListCreateInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR;
  
}

_VkImageFormatListCreateInfoKHR::~_VkImageFormatListCreateInfoKHR() {
  //printf("VkImageFormatListCreateInfoKHR deconstructed!!\n");
  
  
  
  pViewFormats.Reset();
  
}

void _VkImageFormatListCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImageFormatListCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImageFormatListCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("viewFormatCount").ToLocalChecked(), GetviewFormatCount, SetviewFormatCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pViewFormats").ToLocalChecked(), GetpViewFormats, SetpViewFormats, ctor);
  Nan::Set(target, Nan::New("VkImageFormatListCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkImageFormatListCreateInfoKHR::flush() {
  _VkImageFormatListCreateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkImageFormatListCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkImageFormatListCreateInfoKHR* self = new _VkImageFormatListCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("viewFormatCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pViewFormats").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImageFormatListCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkImageFormatListCreateInfoKHR::GetsType) {
  _VkImageFormatListCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkImageFormatListCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkImageFormatListCreateInfoKHR::SetsType) {
  _VkImageFormatListCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkImageFormatListCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkImageFormatListCreateInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// viewFormatCount
NAN_GETTER(_VkImageFormatListCreateInfoKHR::GetviewFormatCount) {
  _VkImageFormatListCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkImageFormatListCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.viewFormatCount));
}NAN_SETTER(_VkImageFormatListCreateInfoKHR::SetviewFormatCount) {
  _VkImageFormatListCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkImageFormatListCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.viewFormatCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkImageFormatListCreateInfoKHR.viewFormatCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pViewFormats
NAN_GETTER(_VkImageFormatListCreateInfoKHR::GetpViewFormats) {
  _VkImageFormatListCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkImageFormatListCreateInfoKHR>(info.This());
  if (self->pViewFormats.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pViewFormats);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkImageFormatListCreateInfoKHR::SetpViewFormats) {
  _VkImageFormatListCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkImageFormatListCreateInfoKHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsInt32Array()) {
        self->pViewFormats.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Int32Array' for 'VkImageFormatListCreateInfoKHR.pViewFormats' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pViewFormats.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Int32Array' for 'VkImageFormatListCreateInfoKHR.pViewFormats' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pViewFormats = reinterpret_cast<const VkFormat *>(getTypedArrayData<int32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr));
  } else {
    self->instance.pViewFormats = nullptr;
  }
}