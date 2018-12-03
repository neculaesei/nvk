/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKDEBUGUTILSMESSENGERCALLBACKDATAEXT_H__
#define __VK_VKDEBUGUTILSMESSENGERCALLBACKDATAEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDebugUtilsMessengerCallbackDataEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> pMessageIdName;
    static NAN_GETTER(GetpMessageIdName);
    static NAN_SETTER(SetpMessageIdName);
    
    static NAN_GETTER(GetmessageIdNumber);
    static NAN_SETTER(SetmessageIdNumber);
    
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> pMessage;
    static NAN_GETTER(GetpMessage);
    static NAN_SETTER(SetpMessage);
    
    static NAN_GETTER(GetqueueLabelCount);
    static NAN_SETTER(SetqueueLabelCount);
    
    std::vector<VkDebugUtilsLabelEXT>* vpQueueLabels;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pQueueLabels;
    static NAN_GETTER(GetpQueueLabels);
    static NAN_SETTER(SetpQueueLabels);
    
    static NAN_GETTER(GetcmdBufLabelCount);
    static NAN_SETTER(SetcmdBufLabelCount);
    
    std::vector<VkDebugUtilsLabelEXT>* vpCmdBufLabels;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pCmdBufLabels;
    static NAN_GETTER(GetpCmdBufLabels);
    static NAN_SETTER(SetpCmdBufLabels);
    
    static NAN_GETTER(GetobjectCount);
    static NAN_SETTER(SetobjectCount);
    
    std::vector<VkDebugUtilsObjectNameInfoEXT>* vpObjects;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pObjects;
    static NAN_GETTER(GetpObjects);
    static NAN_SETTER(SetpObjects);
    

    // real instance
    VkDebugUtilsMessengerCallbackDataEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDebugUtilsMessengerCallbackDataEXT();
    ~_VkDebugUtilsMessengerCallbackDataEXT();

};

#endif