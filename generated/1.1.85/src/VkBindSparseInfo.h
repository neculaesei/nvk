/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKBINDSPARSEINFO_H__
#define __VK_VKBINDSPARSEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkBindSparseInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetwaitSemaphoreCount);
    static NAN_SETTER(SetwaitSemaphoreCount);
    
    std::vector<VkSemaphore>* vpWaitSemaphores;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pWaitSemaphores;
    static NAN_GETTER(GetpWaitSemaphores);
    static NAN_SETTER(SetpWaitSemaphores);
    
    static NAN_GETTER(GetbufferBindCount);
    static NAN_SETTER(SetbufferBindCount);
    
    std::vector<VkSparseBufferMemoryBindInfo>* vpBufferBinds;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pBufferBinds;
    static NAN_GETTER(GetpBufferBinds);
    static NAN_SETTER(SetpBufferBinds);
    
    static NAN_GETTER(GetimageOpaqueBindCount);
    static NAN_SETTER(SetimageOpaqueBindCount);
    
    std::vector<VkSparseImageOpaqueMemoryBindInfo>* vpImageOpaqueBinds;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pImageOpaqueBinds;
    static NAN_GETTER(GetpImageOpaqueBinds);
    static NAN_SETTER(SetpImageOpaqueBinds);
    
    static NAN_GETTER(GetimageBindCount);
    static NAN_SETTER(SetimageBindCount);
    
    std::vector<VkSparseImageMemoryBindInfo>* vpImageBinds;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pImageBinds;
    static NAN_GETTER(GetpImageBinds);
    static NAN_SETTER(SetpImageBinds);
    
    static NAN_GETTER(GetsignalSemaphoreCount);
    static NAN_SETTER(SetsignalSemaphoreCount);
    
    std::vector<VkSemaphore>* vpSignalSemaphores;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pSignalSemaphores;
    static NAN_GETTER(GetpSignalSemaphores);
    static NAN_SETTER(SetpSignalSemaphores);
    

    // real instance
    VkBindSparseInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkBindSparseInfo();
    ~_VkBindSparseInfo();

};

#endif