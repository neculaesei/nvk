/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKCOMMANDPOOLCREATEINFO_H__
#define __VK_VKCOMMANDPOOLCREATEINFO_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkCommandPoolCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetqueueFamilyIndex);
    static NAN_SETTER(SetqueueFamilyIndex);
    

    // real instance
    VkCommandPoolCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkCommandPoolCreateInfo();
    ~_VkCommandPoolCreateInfo();

};

#endif