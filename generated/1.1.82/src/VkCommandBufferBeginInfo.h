/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKCOMMANDBUFFERBEGININFO_H__
#define __VK_VKCOMMANDBUFFERBEGININFO_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkCommandBufferBeginInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pInheritanceInfo;
      static NAN_GETTER(GetpInheritanceInfo);
    static NAN_SETTER(SetpInheritanceInfo);
    

    // real instance
    VkCommandBufferBeginInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkCommandBufferBeginInfo();
    ~_VkCommandBufferBeginInfo();

};

#endif