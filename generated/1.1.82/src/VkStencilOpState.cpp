/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkStencilOpState.h"

Nan::Persistent<v8::FunctionTemplate> _VkStencilOpState::constructor;

_VkStencilOpState::_VkStencilOpState() {
  
}

_VkStencilOpState::~_VkStencilOpState() {
  //printf("VkStencilOpState deconstructed!!\n");
}

void _VkStencilOpState::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkStencilOpState::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkStencilOpState").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("failOp").ToLocalChecked(), GetfailOp, SetfailOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("passOp").ToLocalChecked(), GetpassOp, SetpassOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthFailOp").ToLocalChecked(), GetdepthFailOp, SetdepthFailOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("compareOp").ToLocalChecked(), GetcompareOp, SetcompareOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("compareMask").ToLocalChecked(), GetcompareMask, SetcompareMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("writeMask").ToLocalChecked(), GetwriteMask, SetwriteMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("reference").ToLocalChecked(), Getreference, Setreference, ctor);
  Nan::Set(target, Nan::New("VkStencilOpState").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkStencilOpState::New) {
  if (info.IsConstructCall()) {
    _VkStencilOpState* self = new _VkStencilOpState();
    self->Wrap(info.Holder());
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkStencilOpState constructor cannot be invoked without 'new'");
  }
};

// failOp
NAN_GETTER(_VkStencilOpState::GetfailOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.failOp));
}NAN_SETTER(_VkStencilOpState::SetfailOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  self->instance.failOp = static_cast<VkStencilOp>((int32_t)value->NumberValue());
}// passOp
NAN_GETTER(_VkStencilOpState::GetpassOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.passOp));
}NAN_SETTER(_VkStencilOpState::SetpassOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  self->instance.passOp = static_cast<VkStencilOp>((int32_t)value->NumberValue());
}// depthFailOp
NAN_GETTER(_VkStencilOpState::GetdepthFailOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthFailOp));
}NAN_SETTER(_VkStencilOpState::SetdepthFailOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  self->instance.depthFailOp = static_cast<VkStencilOp>((int32_t)value->NumberValue());
}// compareOp
NAN_GETTER(_VkStencilOpState::GetcompareOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compareOp));
}NAN_SETTER(_VkStencilOpState::SetcompareOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  self->instance.compareOp = static_cast<VkCompareOp>((int32_t)value->NumberValue());
}// compareMask
NAN_GETTER(_VkStencilOpState::GetcompareMask) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compareMask));
}NAN_SETTER(_VkStencilOpState::SetcompareMask) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  self->instance.compareMask = static_cast<uint32_t>(value->NumberValue());
}// writeMask
NAN_GETTER(_VkStencilOpState::GetwriteMask) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.writeMask));
}NAN_SETTER(_VkStencilOpState::SetwriteMask) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  self->instance.writeMask = static_cast<uint32_t>(value->NumberValue());
}// reference
NAN_GETTER(_VkStencilOpState::Getreference) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.reference));
}NAN_SETTER(_VkStencilOpState::Setreference) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  self->instance.reference = static_cast<uint32_t>(value->NumberValue());
}