/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKCOMMANDBUFFERINHERITANCEINFO_H__
#define __VK_VKCOMMANDBUFFERINHERITANCEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkCommandBufferInheritanceInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> renderPass;
      static NAN_GETTER(GetrenderPass);
    static NAN_SETTER(SetrenderPass);
    
    static NAN_GETTER(Getsubpass);
    static NAN_SETTER(Setsubpass);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> framebuffer;
      static NAN_GETTER(Getframebuffer);
    static NAN_SETTER(Setframebuffer);
    
    static NAN_GETTER(GetocclusionQueryEnable);
    static NAN_SETTER(SetocclusionQueryEnable);
    
    static NAN_GETTER(GetqueryFlags);
    static NAN_SETTER(SetqueryFlags);
    
    static NAN_GETTER(GetpipelineStatistics);
    static NAN_SETTER(SetpipelineStatistics);
    

    // real instance
    VkCommandBufferInheritanceInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkCommandBufferInheritanceInfo();
    ~_VkCommandBufferInheritanceInfo();

};

#endif