/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKMEMORYDEDICATEDALLOCATEINFO_H__
#define __VK_VKMEMORYDEDICATEDALLOCATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkMemoryDedicatedAllocateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> image;
      static NAN_GETTER(Getimage);
    static NAN_SETTER(Setimage);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> buffer;
      static NAN_GETTER(Getbuffer);
    static NAN_SETTER(Setbuffer);
    

    // real instance
    VkMemoryDedicatedAllocateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkMemoryDedicatedAllocateInfo();
    ~_VkMemoryDedicatedAllocateInfo();

};

#endif