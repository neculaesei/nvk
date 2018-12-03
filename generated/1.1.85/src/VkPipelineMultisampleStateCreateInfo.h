/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKPIPELINEMULTISAMPLESTATECREATEINFO_H__
#define __VK_VKPIPELINEMULTISAMPLESTATECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineMultisampleStateCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetrasterizationSamples);
    static NAN_SETTER(SetrasterizationSamples);
    
    static NAN_GETTER(GetsampleShadingEnable);
    static NAN_SETTER(SetsampleShadingEnable);
    
    static NAN_GETTER(GetminSampleShading);
    static NAN_SETTER(SetminSampleShading);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pSampleMask;
    static NAN_GETTER(GetpSampleMask);
    static NAN_SETTER(SetpSampleMask);
    
    static NAN_GETTER(GetalphaToCoverageEnable);
    static NAN_SETTER(SetalphaToCoverageEnable);
    
    static NAN_GETTER(GetalphaToOneEnable);
    static NAN_SETTER(SetalphaToOneEnable);
    

    // real instance
    VkPipelineMultisampleStateCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineMultisampleStateCreateInfo();
    ~_VkPipelineMultisampleStateCreateInfo();

};

#endif