/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineViewportCoarseSampleOrderStateCreateInfoNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::constructor;

_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV;
  vpCustomSampleOrders = new std::vector<VkCoarseSampleOrderCustomNV>;
  
}

_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::~_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV() {
  //printf("VkPipelineViewportCoarseSampleOrderStateCreateInfoNV deconstructed!!\n");
  
  
  
  
  vpCustomSampleOrders->clear();
  delete vpCustomSampleOrders;
  
  pCustomSampleOrders.Reset();
  
}

void _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineViewportCoarseSampleOrderStateCreateInfoNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("sampleOrderType").ToLocalChecked(), GetsampleOrderType, SetsampleOrderType, ctor);
  SetPrototypeAccessor(proto, Nan::New("customSampleOrderCount").ToLocalChecked(), GetcustomSampleOrderCount, SetcustomSampleOrderCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pCustomSampleOrders").ToLocalChecked(), GetpCustomSampleOrders, SetpCustomSampleOrders, ctor);
  Nan::Set(target, Nan::New("VkPipelineViewportCoarseSampleOrderStateCreateInfoNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::flush() {
  _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *self = this;
  if (!(self->pCustomSampleOrders.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pCustomSampleOrders);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.customSampleOrderCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'customSampleOrderCount' for 'VkPipelineViewportCoarseSampleOrderStateCreateInfoNV.pCustomSampleOrders'");
      return false;
    }
    std::vector<VkCoarseSampleOrderCustomNV>* data = self->vpCustomSampleOrders;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkCoarseSampleOrderCustomNV::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkCoarseSampleOrderCustomNV]' for 'VkPipelineViewportCoarseSampleOrderStateCreateInfoNV.pCustomSampleOrders' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkCoarseSampleOrderCustomNV* result = Nan::ObjectWrap::Unwrap<_VkCoarseSampleOrderCustomNV>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pCustomSampleOrders = data->data();
  }
  return true;
}

NAN_METHOD(_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::New) {
  if (info.IsConstructCall()) {
    _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* self = new _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("sampleOrderType").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("customSampleOrderCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pCustomSampleOrders").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineViewportCoarseSampleOrderStateCreateInfoNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::GetsType) {
  _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::SetsType) {
  _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportCoarseSampleOrderStateCreateInfoNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// sampleOrderType
NAN_GETTER(_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::GetsampleOrderType) {
  _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sampleOrderType));
}NAN_SETTER(_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::SetsampleOrderType) {
  _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sampleOrderType = static_cast<VkCoarseSampleOrderTypeNV>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportCoarseSampleOrderStateCreateInfoNV.sampleOrderType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// customSampleOrderCount
NAN_GETTER(_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::GetcustomSampleOrderCount) {
  _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.customSampleOrderCount));
}NAN_SETTER(_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::SetcustomSampleOrderCount) {
  _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.customSampleOrderCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportCoarseSampleOrderStateCreateInfoNV.customSampleOrderCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pCustomSampleOrders
NAN_GETTER(_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::GetpCustomSampleOrders) {
  _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(info.This());
  if (self->pCustomSampleOrders.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pCustomSampleOrders);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::SetpCustomSampleOrders) {
  _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pCustomSampleOrders.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pCustomSampleOrders.Reset();
      self->instance.pCustomSampleOrders = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkCoarseSampleOrderCustomNV]' for 'VkPipelineViewportCoarseSampleOrderStateCreateInfoNV.pCustomSampleOrders' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pCustomSampleOrders = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkCoarseSampleOrderCustomNV]' for 'VkPipelineViewportCoarseSampleOrderStateCreateInfoNV.pCustomSampleOrders' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}