/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKWIN32KEYEDMUTEXACQUIRERELEASEINFONV_H__
#define __VK_VKWIN32KEYEDMUTEXACQUIRERELEASEINFONV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkWin32KeyedMutexAcquireReleaseInfoNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetacquireCount);
    static NAN_SETTER(SetacquireCount);
    
    std::vector<VkDeviceMemory>* vpAcquireSyncs;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pAcquireSyncs;
    static NAN_GETTER(GetpAcquireSyncs);
    static NAN_SETTER(SetpAcquireSyncs);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pAcquireKeys;
    static NAN_GETTER(GetpAcquireKeys);
    static NAN_SETTER(SetpAcquireKeys);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pAcquireTimeoutMilliseconds;
    static NAN_GETTER(GetpAcquireTimeoutMilliseconds);
    static NAN_SETTER(SetpAcquireTimeoutMilliseconds);
    
    static NAN_GETTER(GetreleaseCount);
    static NAN_SETTER(SetreleaseCount);
    
    std::vector<VkDeviceMemory>* vpReleaseSyncs;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pReleaseSyncs;
    static NAN_GETTER(GetpReleaseSyncs);
    static NAN_SETTER(SetpReleaseSyncs);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pReleaseKeys;
    static NAN_GETTER(GetpReleaseKeys);
    static NAN_SETTER(SetpReleaseKeys);
    

    // real instance
    VkWin32KeyedMutexAcquireReleaseInfoNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkWin32KeyedMutexAcquireReleaseInfoNV();
    ~_VkWin32KeyedMutexAcquireReleaseInfoNV();

};

#endif