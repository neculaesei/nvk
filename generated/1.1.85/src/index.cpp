/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE

std::string dirname;

#include "index.h"
#include "calls.h"
#include "enums.h"
#include "window.h"

static void createV8ArrayBufferFromMemory(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  if (!(info[0]->IsBigInt())) Nan::ThrowError("First argument must be a BigInt!");
  if (!(info[1]->IsNumber())) Nan::ThrowError("Second argument must be a number!");
  v8::Local<v8::BigInt> arg0 = v8::Local<v8::BigInt>::Cast(info[0]);
  int64_t addr = arg0->Int64Value();
  uint32_t size = Nan::To<uint32_t>(info[1]).FromMaybe(0);
  v8::Local<v8::ArrayBuffer> arr = v8::ArrayBuffer::New(
    v8::Isolate::GetCurrent(),
    reinterpret_cast<void *>(addr),
    size,
    v8::ArrayBufferCreationMode::kExternalized
  );
  info.GetReturnValue().Set(arr);
};

static void _VK_MAKE_VERSION(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  uint32_t major = Nan::To<uint32_t>(info[0]).FromMaybe(0);
  uint32_t minor = Nan::To<uint32_t>(info[1]).FromMaybe(0);
  uint32_t patch = Nan::To<uint32_t>(info[2]).FromMaybe(0);
  info.GetReturnValue().Set(VK_MAKE_VERSION(major, minor, patch));
};

static void _VK_VERSION_MAJOR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  uint32_t version = Nan::To<uint32_t>(info[0]).FromMaybe(0);
  info.GetReturnValue().Set((uint32_t)(version) >> 22);
};

static void _VK_VERSION_MINOR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  uint32_t version = Nan::To<uint32_t>(info[0]).FromMaybe(0);;
  info.GetReturnValue().Set(((uint32_t)(version) >> 12) & 0x3ff);
};

static void _VK_VERSION_PATCH(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  uint32_t version = Nan::To<uint32_t>(info[0]).FromMaybe(0);
  info.GetReturnValue().Set((uint32_t)(version) & 0xfff);
};

static std::string resolveModulePath(v8::Handle<v8::Object> module) {
  std::string addonPath = *v8::String::Utf8Value(
    v8::Isolate::GetCurrent(),
    module->Get(Nan::New("filename").ToLocalChecked()).As<v8::String>()
  );
  std::string path = addonPath.substr(0, addonPath.find_last_of("/\\"));
  return path;
};

static void init(v8::Handle<v8::Object> target, v8::Handle<v8::Object> module) {
  // path to addon
  dirname = resolveModulePath(module);
  // default initializers
  VulkanWindow::Initialize(target);
  // manual initializers
  target->Set(
    Nan::New("createV8ArrayBufferFromMemory").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(createV8ArrayBufferFromMemory)->GetFunction()
  );
  target->Set(
    Nan::New("getVulkanEnumerations").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(getVulkanEnumerations)->GetFunction()
  );
  // vulkan stubs
  target->Set(
    Nan::New("VK_MAKE_VERSION").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_VK_MAKE_VERSION)->GetFunction()
  );
  target->Set(
    Nan::New("VK_VERSION_MAJOR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_VK_VERSION_MAJOR)->GetFunction()
  );
  target->Set(
    Nan::New("VK_VERSION_MINOR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_VK_VERSION_MINOR)->GetFunction()
  );
  target->Set(
    Nan::New("VK_VERSION_PATCH").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_VK_VERSION_PATCH)->GetFunction()
  );
  target->Set(
    Nan::New("VK_API_VERSION_1_0").ToLocalChecked(),
    Nan::New(VK_MAKE_VERSION(1, 0, 0))
  );
  // generated initializers
  _VkDebugUtilsMessengerEXT::Initialize(target);
  _VkDebugReportCallbackEXT::Initialize(target);
  _VkSwapchainKHR::Initialize(target);
  _VkSurfaceKHR::Initialize(target);
  _VkDisplayModeKHR::Initialize(target);
  _VkDisplayKHR::Initialize(target);
  _VkValidationCacheEXT::Initialize(target);
  _VkSamplerYcbcrConversion::Initialize(target);
  _VkDescriptorUpdateTemplate::Initialize(target);
  _VkIndirectCommandsLayoutNVX::Initialize(target);
  _VkObjectTableNVX::Initialize(target);
  _VkPipelineCache::Initialize(target);
  _VkRenderPass::Initialize(target);
  _VkFramebuffer::Initialize(target);
  _VkQueryPool::Initialize(target);
  _VkEvent::Initialize(target);
  _VkSemaphore::Initialize(target);
  _VkFence::Initialize(target);
  _VkDescriptorPool::Initialize(target);
  _VkDescriptorSetLayout::Initialize(target);
  _VkDescriptorSet::Initialize(target);
  _VkSampler::Initialize(target);
  _VkPipelineLayout::Initialize(target);
  _VkPipeline::Initialize(target);
  _VkShaderModule::Initialize(target);
  _VkImageView::Initialize(target);
  _VkImage::Initialize(target);
  _VkBufferView::Initialize(target);
  _VkBuffer::Initialize(target);
  _VkCommandPool::Initialize(target);
  _VkDeviceMemory::Initialize(target);
  _VkCommandBuffer::Initialize(target);
  _VkQueue::Initialize(target);
  _VkDevice::Initialize(target);
  _VkPhysicalDevice::Initialize(target);
  _VkInstance::Initialize(target);
  _VkClearColorValue::Initialize(target);
  _VkBindImagePlaneMemoryInfo::Initialize(target);
  _VkPresentInfoKHR::Initialize(target);
  _VkExtent2D::Initialize(target);
  _VkSwapchainCreateInfoKHR::Initialize(target);
  _VkSurfaceFormatKHR::Initialize(target);
  _VkSurfaceCapabilitiesKHR::Initialize(target);
  _VkSubmitInfo::Initialize(target);
  _VkFramebufferCreateInfo::Initialize(target);
  _VkSemaphoreCreateInfo::Initialize(target);
  _VkSubpassDependency::Initialize(target);
  _VkAttachmentReference::Initialize(target);
  _VkSubpassDescription::Initialize(target);
  _VkAttachmentDescription::Initialize(target);
  _VkRenderPassCreateInfo::Initialize(target);
  _VkClearDepthStencilValue::Initialize(target);
  _VkClearValue::Initialize(target);
  _VkOffset2D::Initialize(target);
  _VkRect2D::Initialize(target);
  _VkRenderPassBeginInfo::Initialize(target);
  _VkCommandBufferInheritanceInfo::Initialize(target);
  _VkCommandBufferBeginInfo::Initialize(target);
  _VkCommandBufferAllocateInfo::Initialize(target);
  _VkCommandPoolCreateInfo::Initialize(target);
  _VkSamplerCreateInfo::Initialize(target);
  _VkPushConstantRange::Initialize(target);
  _VkPipelineLayoutCreateInfo::Initialize(target);
  _VkPipelineDynamicStateCreateInfo::Initialize(target);
  _VkPipelineColorBlendAttachmentState::Initialize(target);
  _VkPipelineColorBlendStateCreateInfo::Initialize(target);
  _VkStencilOpState::Initialize(target);
  _VkPipelineDepthStencilStateCreateInfo::Initialize(target);
  _VkPipelineMultisampleStateCreateInfo::Initialize(target);
  _VkPipelineRasterizationStateCreateInfo::Initialize(target);
  _VkViewport::Initialize(target);
  _VkPipelineViewportStateCreateInfo::Initialize(target);
  _VkPipelineTessellationStateCreateInfo::Initialize(target);
  _VkPipelineInputAssemblyStateCreateInfo::Initialize(target);
  _VkVertexInputAttributeDescription::Initialize(target);
  _VkVertexInputBindingDescription::Initialize(target);
  _VkPipelineVertexInputStateCreateInfo::Initialize(target);
  _VkSpecializationMapEntry::Initialize(target);
  _VkSpecializationInfo::Initialize(target);
  _VkPipelineShaderStageCreateInfo::Initialize(target);
  _VkGraphicsPipelineCreateInfo::Initialize(target);
  _VkComputePipelineCreateInfo::Initialize(target);
  _VkDescriptorSetAllocateInfo::Initialize(target);
  _VkDescriptorPoolSize::Initialize(target);
  _VkDescriptorPoolCreateInfo::Initialize(target);
  _VkDescriptorSetLayoutBinding::Initialize(target);
  _VkDescriptorSetLayoutCreateInfo::Initialize(target);
  _VkShaderModuleCreateInfo::Initialize(target);
  _VkExtent3D::Initialize(target);
  _VkOffset3D::Initialize(target);
  _VkImageSubresourceLayers::Initialize(target);
  _VkBufferImageCopy::Initialize(target);
  _VkBufferCopy::Initialize(target);
  _VkImageSubresourceRange::Initialize(target);
  _VkComponentMapping::Initialize(target);
  _VkImageViewCreateInfo::Initialize(target);
  _VkSubresourceLayout::Initialize(target);
  _VkImageCreateInfo::Initialize(target);
  _VkImageMemoryBarrier::Initialize(target);
  _VkBufferMemoryBarrier::Initialize(target);
  _VkMemoryBarrier::Initialize(target);
  _VkImageSubresource::Initialize(target);
  _VkBufferCreateInfo::Initialize(target);
  _VkCopyDescriptorSet::Initialize(target);
  _VkDescriptorBufferInfo::Initialize(target);
  _VkDescriptorImageInfo::Initialize(target);
  _VkWriteDescriptorSet::Initialize(target);
  _VkMemoryRequirements::Initialize(target);
  _VkMemoryAllocateInfo::Initialize(target);
  _VkMemoryHeap::Initialize(target);
  _VkMemoryType::Initialize(target);
  _VkPhysicalDeviceMemoryProperties::Initialize(target);
  _VkQueueFamilyProperties::Initialize(target);
  _VkApplicationInfo::Initialize(target);
  _VkInstanceCreateInfo::Initialize(target);
  _VkPhysicalDeviceFeatures::Initialize(target);
  _VkDeviceQueueCreateInfo::Initialize(target);
  _VkDeviceCreateInfo::Initialize(target);
  _VkLayerProperties::Initialize(target);
  _VkPhysicalDeviceSparseProperties::Initialize(target);
  _VkPhysicalDeviceLimits::Initialize(target);
  _VkPhysicalDeviceProperties::Initialize(target);
  _VkClearRect::Initialize(target);
  
  target->Set(
    Nan::New("vkCreateInstance").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateInstance)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyInstance").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyInstance)->GetFunction()
  );
  target->Set(
    Nan::New("vkEnumeratePhysicalDevices").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkEnumeratePhysicalDevices)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetPhysicalDeviceProperties").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetPhysicalDeviceProperties)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetPhysicalDeviceQueueFamilyProperties").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetPhysicalDeviceQueueFamilyProperties)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetPhysicalDeviceMemoryProperties").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetPhysicalDeviceMemoryProperties)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetPhysicalDeviceFeatures").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetPhysicalDeviceFeatures)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateDevice").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateDevice)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyDevice").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyDevice)->GetFunction()
  );
  target->Set(
    Nan::New("vkEnumerateInstanceLayerProperties").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkEnumerateInstanceLayerProperties)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetDeviceQueue").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetDeviceQueue)->GetFunction()
  );
  target->Set(
    Nan::New("vkQueueSubmit").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkQueueSubmit)->GetFunction()
  );
  target->Set(
    Nan::New("vkQueueWaitIdle").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkQueueWaitIdle)->GetFunction()
  );
  target->Set(
    Nan::New("vkDeviceWaitIdle").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDeviceWaitIdle)->GetFunction()
  );
  target->Set(
    Nan::New("vkAllocateMemory").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkAllocateMemory)->GetFunction()
  );
  target->Set(
    Nan::New("vkFreeMemory").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkFreeMemory)->GetFunction()
  );
  target->Set(
    Nan::New("vkMapMemory").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkMapMemory)->GetFunction()
  );
  target->Set(
    Nan::New("vkUnmapMemory").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkUnmapMemory)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetBufferMemoryRequirements").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetBufferMemoryRequirements)->GetFunction()
  );
  target->Set(
    Nan::New("vkBindBufferMemory").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkBindBufferMemory)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetImageMemoryRequirements").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetImageMemoryRequirements)->GetFunction()
  );
  target->Set(
    Nan::New("vkBindImageMemory").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkBindImageMemory)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyFence").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyFence)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateSemaphore").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateSemaphore)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroySemaphore").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroySemaphore)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyEvent").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyEvent)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyQueryPool").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyQueryPool)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateBuffer").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateBuffer)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyBuffer").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyBuffer)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyBufferView").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyBufferView)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateImage").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateImage)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyImage").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyImage)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetImageSubresourceLayout").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetImageSubresourceLayout)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateImageView").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateImageView)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyImageView").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyImageView)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateShaderModule").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateShaderModule)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyShaderModule").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyShaderModule)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyPipelineCache").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyPipelineCache)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateGraphicsPipelines").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateGraphicsPipelines)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateComputePipelines").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateComputePipelines)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyPipeline").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyPipeline)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreatePipelineLayout").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreatePipelineLayout)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyPipelineLayout").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyPipelineLayout)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateSampler").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateSampler)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroySampler").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroySampler)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateDescriptorSetLayout").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateDescriptorSetLayout)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyDescriptorSetLayout").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyDescriptorSetLayout)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateDescriptorPool").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateDescriptorPool)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyDescriptorPool").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyDescriptorPool)->GetFunction()
  );
  target->Set(
    Nan::New("vkAllocateDescriptorSets").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkAllocateDescriptorSets)->GetFunction()
  );
  target->Set(
    Nan::New("vkUpdateDescriptorSets").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkUpdateDescriptorSets)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateFramebuffer").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateFramebuffer)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyFramebuffer").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyFramebuffer)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateRenderPass").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateRenderPass)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyRenderPass").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyRenderPass)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateCommandPool").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateCommandPool)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyCommandPool").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyCommandPool)->GetFunction()
  );
  target->Set(
    Nan::New("vkAllocateCommandBuffers").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkAllocateCommandBuffers)->GetFunction()
  );
  target->Set(
    Nan::New("vkFreeCommandBuffers").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkFreeCommandBuffers)->GetFunction()
  );
  target->Set(
    Nan::New("vkBeginCommandBuffer").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkBeginCommandBuffer)->GetFunction()
  );
  target->Set(
    Nan::New("vkEndCommandBuffer").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkEndCommandBuffer)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdBindPipeline").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdBindPipeline)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdSetViewport").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdSetViewport)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdSetScissor").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdSetScissor)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdBindDescriptorSets").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdBindDescriptorSets)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdBindIndexBuffer").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdBindIndexBuffer)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdBindVertexBuffers").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdBindVertexBuffers)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdDraw").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdDraw)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdDrawIndexed").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdDrawIndexed)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdDispatch").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdDispatch)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdCopyBuffer").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdCopyBuffer)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdCopyBufferToImage").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdCopyBufferToImage)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdPipelineBarrier").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdPipelineBarrier)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdBeginRenderPass").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdBeginRenderPass)->GetFunction()
  );
  target->Set(
    Nan::New("vkCmdEndRenderPass").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCmdEndRenderPass)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroySurfaceKHR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroySurfaceKHR)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetPhysicalDeviceSurfaceSupportKHR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetPhysicalDeviceSurfaceSupportKHR)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetPhysicalDeviceSurfaceCapabilitiesKHR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetPhysicalDeviceSurfaceFormatsKHR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetPhysicalDeviceSurfaceFormatsKHR)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetPhysicalDeviceSurfacePresentModesKHR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetPhysicalDeviceSurfacePresentModesKHR)->GetFunction()
  );
  target->Set(
    Nan::New("vkCreateSwapchainKHR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkCreateSwapchainKHR)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroySwapchainKHR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroySwapchainKHR)->GetFunction()
  );
  target->Set(
    Nan::New("vkGetSwapchainImagesKHR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkGetSwapchainImagesKHR)->GetFunction()
  );
  target->Set(
    Nan::New("vkAcquireNextImageKHR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkAcquireNextImageKHR)->GetFunction()
  );
  target->Set(
    Nan::New("vkQueuePresentKHR").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkQueuePresentKHR)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroyDescriptorUpdateTemplate").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroyDescriptorUpdateTemplate)->GetFunction()
  );
  target->Set(
    Nan::New("vkDestroySamplerYcbcrConversion").ToLocalChecked(),
    Nan::New<v8::FunctionTemplate>(_vkDestroySamplerYcbcrConversion)->GetFunction()
  );
  
}

NODE_MODULE(myModule, init);
