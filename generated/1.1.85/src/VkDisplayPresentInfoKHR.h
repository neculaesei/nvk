/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKDISPLAYPRESENTINFOKHR_H__
#define __VK_VKDISPLAYPRESENTINFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDisplayPresentInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> srcRect;
      static NAN_GETTER(GetsrcRect);
    static NAN_SETTER(SetsrcRect);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> dstRect;
      static NAN_GETTER(GetdstRect);
    static NAN_SETTER(SetdstRect);
    
    static NAN_GETTER(Getpersistent);
    static NAN_SETTER(Setpersistent);
    

    // real instance
    VkDisplayPresentInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDisplayPresentInfoKHR();
    ~_VkDisplayPresentInfoKHR();

};

#endif