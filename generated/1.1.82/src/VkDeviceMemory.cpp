/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "VkDeviceMemory.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceMemory::constructor;

_VkDeviceMemory::_VkDeviceMemory() {}
_VkDeviceMemory::~_VkDeviceMemory() {}

void _VkDeviceMemory::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceMemory::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceMemory").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkDeviceMemory").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDeviceMemory::New) {
  _VkDeviceMemory* self = new _VkDeviceMemory();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
