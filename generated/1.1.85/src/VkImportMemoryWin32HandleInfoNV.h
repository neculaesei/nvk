/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKIMPORTMEMORYWIN32HANDLEINFONV_H__
#define __VK_VKIMPORTMEMORYWIN32HANDLEINFONV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkImportMemoryWin32HandleInfoNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GethandleType);
    static NAN_SETTER(SethandleType);
    

    // real instance
    VkImportMemoryWin32HandleInfoNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkImportMemoryWin32HandleInfoNV();
    ~_VkImportMemoryWin32HandleInfoNV();

};

#endif