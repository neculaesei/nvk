/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkBindSparseInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkBindSparseInfo::constructor;

_VkBindSparseInfo::_VkBindSparseInfo() {
  instance.sType = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;
  vpWaitSemaphores = new std::vector<VkSemaphore>;
  vpBufferBinds = new std::vector<VkSparseBufferMemoryBindInfo>;
  vpImageOpaqueBinds = new std::vector<VkSparseImageOpaqueMemoryBindInfo>;
  vpImageBinds = new std::vector<VkSparseImageMemoryBindInfo>;
  vpSignalSemaphores = new std::vector<VkSemaphore>;
  
}

_VkBindSparseInfo::~_VkBindSparseInfo() {
  //printf("VkBindSparseInfo deconstructed!!\n");
  
  
  
  vpWaitSemaphores->clear();
  delete vpWaitSemaphores;
  
  pWaitSemaphores.Reset();
  
  
  vpBufferBinds->clear();
  delete vpBufferBinds;
  
  pBufferBinds.Reset();
  
  
  vpImageOpaqueBinds->clear();
  delete vpImageOpaqueBinds;
  
  pImageOpaqueBinds.Reset();
  
  
  vpImageBinds->clear();
  delete vpImageBinds;
  
  pImageBinds.Reset();
  
  
  vpSignalSemaphores->clear();
  delete vpSignalSemaphores;
  
  pSignalSemaphores.Reset();
  
}

void _VkBindSparseInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBindSparseInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBindSparseInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("waitSemaphoreCount").ToLocalChecked(), GetwaitSemaphoreCount, SetwaitSemaphoreCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pWaitSemaphores").ToLocalChecked(), GetpWaitSemaphores, SetpWaitSemaphores, ctor);
  SetPrototypeAccessor(proto, Nan::New("bufferBindCount").ToLocalChecked(), GetbufferBindCount, SetbufferBindCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pBufferBinds").ToLocalChecked(), GetpBufferBinds, SetpBufferBinds, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageOpaqueBindCount").ToLocalChecked(), GetimageOpaqueBindCount, SetimageOpaqueBindCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pImageOpaqueBinds").ToLocalChecked(), GetpImageOpaqueBinds, SetpImageOpaqueBinds, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageBindCount").ToLocalChecked(), GetimageBindCount, SetimageBindCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pImageBinds").ToLocalChecked(), GetpImageBinds, SetpImageBinds, ctor);
  SetPrototypeAccessor(proto, Nan::New("signalSemaphoreCount").ToLocalChecked(), GetsignalSemaphoreCount, SetsignalSemaphoreCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSignalSemaphores").ToLocalChecked(), GetpSignalSemaphores, SetpSignalSemaphores, ctor);
  Nan::Set(target, Nan::New("VkBindSparseInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkBindSparseInfo::flush() {
  _VkBindSparseInfo *self = this;
  if (!(self->pWaitSemaphores.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pWaitSemaphores);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.waitSemaphoreCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'waitSemaphoreCount' for 'VkBindSparseInfo.pWaitSemaphores'");
      return false;
    }
    std::vector<VkSemaphore>* data = self->vpWaitSemaphores;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkSemaphore::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSemaphore]' for 'VkBindSparseInfo.pWaitSemaphores' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkSemaphore* result = Nan::ObjectWrap::Unwrap<_VkSemaphore>(obj);
      
      data->push_back(result->instance);
    };
    self->instance.pWaitSemaphores = data->data();
  }if (!(self->pBufferBinds.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pBufferBinds);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.bufferBindCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'bufferBindCount' for 'VkBindSparseInfo.pBufferBinds'");
      return false;
    }
    std::vector<VkSparseBufferMemoryBindInfo>* data = self->vpBufferBinds;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkSparseBufferMemoryBindInfo::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSparseBufferMemoryBindInfo]' for 'VkBindSparseInfo.pBufferBinds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkSparseBufferMemoryBindInfo* result = Nan::ObjectWrap::Unwrap<_VkSparseBufferMemoryBindInfo>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pBufferBinds = data->data();
  }if (!(self->pImageOpaqueBinds.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pImageOpaqueBinds);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.imageOpaqueBindCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'imageOpaqueBindCount' for 'VkBindSparseInfo.pImageOpaqueBinds'");
      return false;
    }
    std::vector<VkSparseImageOpaqueMemoryBindInfo>* data = self->vpImageOpaqueBinds;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkSparseImageOpaqueMemoryBindInfo::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSparseImageOpaqueMemoryBindInfo]' for 'VkBindSparseInfo.pImageOpaqueBinds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkSparseImageOpaqueMemoryBindInfo* result = Nan::ObjectWrap::Unwrap<_VkSparseImageOpaqueMemoryBindInfo>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pImageOpaqueBinds = data->data();
  }if (!(self->pImageBinds.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pImageBinds);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.imageBindCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'imageBindCount' for 'VkBindSparseInfo.pImageBinds'");
      return false;
    }
    std::vector<VkSparseImageMemoryBindInfo>* data = self->vpImageBinds;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkSparseImageMemoryBindInfo::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSparseImageMemoryBindInfo]' for 'VkBindSparseInfo.pImageBinds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkSparseImageMemoryBindInfo* result = Nan::ObjectWrap::Unwrap<_VkSparseImageMemoryBindInfo>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pImageBinds = data->data();
  }if (!(self->pSignalSemaphores.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pSignalSemaphores);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.signalSemaphoreCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'signalSemaphoreCount' for 'VkBindSparseInfo.pSignalSemaphores'");
      return false;
    }
    std::vector<VkSemaphore>* data = self->vpSignalSemaphores;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkSemaphore::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSemaphore]' for 'VkBindSparseInfo.pSignalSemaphores' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkSemaphore* result = Nan::ObjectWrap::Unwrap<_VkSemaphore>(obj);
      
      data->push_back(result->instance);
    };
    self->instance.pSignalSemaphores = data->data();
  }
  return true;
}

NAN_METHOD(_VkBindSparseInfo::New) {
  if (info.IsConstructCall()) {
    _VkBindSparseInfo* self = new _VkBindSparseInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("waitSemaphoreCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pWaitSemaphores").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("bufferBindCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pBufferBinds").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("imageOpaqueBindCount").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pImageOpaqueBinds").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("imageBindCount").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("pImageBinds").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("signalSemaphoreCount").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("pSignalSemaphores").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      if (obj->Has(sAccess11)) info.This()->Set(sAccess11, obj->Get(sAccess11));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBindSparseInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkBindSparseInfo::GetsType) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBindSparseInfo::SetsType) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindSparseInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// waitSemaphoreCount
NAN_GETTER(_VkBindSparseInfo::GetwaitSemaphoreCount) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.waitSemaphoreCount));
}NAN_SETTER(_VkBindSparseInfo::SetwaitSemaphoreCount) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.waitSemaphoreCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindSparseInfo.waitSemaphoreCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pWaitSemaphores
NAN_GETTER(_VkBindSparseInfo::GetpWaitSemaphores) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (self->pWaitSemaphores.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pWaitSemaphores);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindSparseInfo::SetpWaitSemaphores) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pWaitSemaphores.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pWaitSemaphores.Reset();
      self->instance.pWaitSemaphores = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSemaphore]' for 'VkBindSparseInfo.pWaitSemaphores' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pWaitSemaphores = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSemaphore]' for 'VkBindSparseInfo.pWaitSemaphores' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// bufferBindCount
NAN_GETTER(_VkBindSparseInfo::GetbufferBindCount) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.bufferBindCount));
}NAN_SETTER(_VkBindSparseInfo::SetbufferBindCount) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.bufferBindCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindSparseInfo.bufferBindCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pBufferBinds
NAN_GETTER(_VkBindSparseInfo::GetpBufferBinds) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (self->pBufferBinds.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pBufferBinds);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindSparseInfo::SetpBufferBinds) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pBufferBinds.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pBufferBinds.Reset();
      self->instance.pBufferBinds = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSparseBufferMemoryBindInfo]' for 'VkBindSparseInfo.pBufferBinds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pBufferBinds = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSparseBufferMemoryBindInfo]' for 'VkBindSparseInfo.pBufferBinds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// imageOpaqueBindCount
NAN_GETTER(_VkBindSparseInfo::GetimageOpaqueBindCount) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageOpaqueBindCount));
}NAN_SETTER(_VkBindSparseInfo::SetimageOpaqueBindCount) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.imageOpaqueBindCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindSparseInfo.imageOpaqueBindCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pImageOpaqueBinds
NAN_GETTER(_VkBindSparseInfo::GetpImageOpaqueBinds) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (self->pImageOpaqueBinds.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pImageOpaqueBinds);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindSparseInfo::SetpImageOpaqueBinds) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pImageOpaqueBinds.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pImageOpaqueBinds.Reset();
      self->instance.pImageOpaqueBinds = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSparseImageOpaqueMemoryBindInfo]' for 'VkBindSparseInfo.pImageOpaqueBinds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pImageOpaqueBinds = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSparseImageOpaqueMemoryBindInfo]' for 'VkBindSparseInfo.pImageOpaqueBinds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// imageBindCount
NAN_GETTER(_VkBindSparseInfo::GetimageBindCount) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageBindCount));
}NAN_SETTER(_VkBindSparseInfo::SetimageBindCount) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.imageBindCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindSparseInfo.imageBindCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pImageBinds
NAN_GETTER(_VkBindSparseInfo::GetpImageBinds) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (self->pImageBinds.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pImageBinds);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindSparseInfo::SetpImageBinds) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pImageBinds.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pImageBinds.Reset();
      self->instance.pImageBinds = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSparseImageMemoryBindInfo]' for 'VkBindSparseInfo.pImageBinds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pImageBinds = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSparseImageMemoryBindInfo]' for 'VkBindSparseInfo.pImageBinds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// signalSemaphoreCount
NAN_GETTER(_VkBindSparseInfo::GetsignalSemaphoreCount) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.signalSemaphoreCount));
}NAN_SETTER(_VkBindSparseInfo::SetsignalSemaphoreCount) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.signalSemaphoreCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindSparseInfo.signalSemaphoreCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pSignalSemaphores
NAN_GETTER(_VkBindSparseInfo::GetpSignalSemaphores) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  if (self->pSignalSemaphores.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSignalSemaphores);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindSparseInfo::SetpSignalSemaphores) {
  _VkBindSparseInfo *self = Nan::ObjectWrap::Unwrap<_VkBindSparseInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pSignalSemaphores.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pSignalSemaphores.Reset();
      self->instance.pSignalSemaphores = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSemaphore]' for 'VkBindSparseInfo.pSignalSemaphores' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pSignalSemaphores = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSemaphore]' for 'VkBindSparseInfo.pSignalSemaphores' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}