/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKSAMPLERYCBCRCONVERSIONCREATEINFO_H__
#define __VK_VKSAMPLERYCBCRCONVERSIONCREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSamplerYcbcrConversionCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getformat);
    static NAN_SETTER(Setformat);
    
    static NAN_GETTER(GetycbcrModel);
    static NAN_SETTER(SetycbcrModel);
    
    static NAN_GETTER(GetycbcrRange);
    static NAN_SETTER(SetycbcrRange);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> components;
      static NAN_GETTER(Getcomponents);
    static NAN_SETTER(Setcomponents);
    
    static NAN_GETTER(GetxChromaOffset);
    static NAN_SETTER(SetxChromaOffset);
    
    static NAN_GETTER(GetyChromaOffset);
    static NAN_SETTER(SetyChromaOffset);
    
    static NAN_GETTER(GetchromaFilter);
    static NAN_SETTER(SetchromaFilter);
    
    static NAN_GETTER(GetforceExplicitReconstruction);
    static NAN_SETTER(SetforceExplicitReconstruction);
    

    // real instance
    VkSamplerYcbcrConversionCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkSamplerYcbcrConversionCreateInfo();
    ~_VkSamplerYcbcrConversionCreateInfo();

};

#endif