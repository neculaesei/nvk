/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKDESCRIPTORSETLAYOUTCREATEINFO_H__
#define __VK_VKDESCRIPTORSETLAYOUTCREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorSetLayoutCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetbindingCount);
    static NAN_SETTER(SetbindingCount);
    
    std::vector<VkDescriptorSetLayoutBinding>* vpBindings;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pBindings;
    static NAN_GETTER(GetpBindings);
    static NAN_SETTER(SetpBindings);
    

    // real instance
    VkDescriptorSetLayoutCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDescriptorSetLayoutCreateInfo();
    ~_VkDescriptorSetLayoutCreateInfo();

};

#endif