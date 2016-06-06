// Copyright 2016 Intel Corporation All Rights Reserved
// 
// Intel makes no representations about the suitability of this software for any purpose.
// THIS SOFTWARE IS PROVIDED ""AS IS."" INTEL SPECIFICALLY DISCLAIMS ALL WARRANTIES,
// EXPRESS OR IMPLIED, AND ALL LIABILITY, INCLUDING CONSEQUENTIAL AND OTHER INDIRECT DAMAGES,
// FOR THE USE OF THIS SOFTWARE, INCLUDING LIABILITY FOR INFRINGEMENT OF ANY PROPRIETARY
// RIGHTS, AND INCLUDING THE WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
// Intel does not assume any responsibility for any errors which may appear in this software
// nor any responsibility to update it.

// ************************************************************ //
// Exported functions                                           //
//                                                              //
// These functions are always exposed by vulkan libraries.      //
// ************************************************************ //

#if !defined(VK_EXPORTED_FUNCTION)
#define VK_EXPORTED_FUNCTION( fun )
#endif

VK_EXPORTED_FUNCTION( vkGetInstanceProcAddr )

#undef VK_EXPORTED_FUNCTION


// ************************************************************ //
// Global level functions                                       //
//                                                              //
// They allow checking what instance extensions are available   //
// and allow creation of a Vulkan Instance.                     //
// ************************************************************ //

#if !defined(VK_GLOBAL_LEVEL_FUNCTION)
#define VK_GLOBAL_LEVEL_FUNCTION( fun )
#endif

// Tutorial 01
VK_GLOBAL_LEVEL_FUNCTION( vkCreateInstance )

// Tutorial 02
VK_GLOBAL_LEVEL_FUNCTION( vkEnumerateInstanceExtensionProperties )

#undef VK_GLOBAL_LEVEL_FUNCTION


// ************************************************************ //
// Instance level functions                                     //
//                                                              //
// These functions allow for device queries and creation.       //
// They help choose which device is well suited for our needs.  //
// ************************************************************ //

#if !defined(VK_INSTANCE_LEVEL_FUNCTION)
#define VK_INSTANCE_LEVEL_FUNCTION( fun )
#endif

// Tutorial 01
VK_INSTANCE_LEVEL_FUNCTION( vkEnumeratePhysicalDevices )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceProperties )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceFeatures )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceQueueFamilyProperties )
VK_INSTANCE_LEVEL_FUNCTION( vkCreateDevice )
VK_INSTANCE_LEVEL_FUNCTION( vkGetDeviceProcAddr )
VK_INSTANCE_LEVEL_FUNCTION( vkDestroyInstance )

// Tutorial 02
VK_INSTANCE_LEVEL_FUNCTION( vkEnumerateDeviceExtensionProperties )
#if defined(USE_SWAPCHAIN_EXTENSIONS)
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceSurfaceSupportKHR )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceSurfaceCapabilitiesKHR )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceSurfaceFormatsKHR )
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceSurfacePresentModesKHR )
VK_INSTANCE_LEVEL_FUNCTION( vkDestroySurfaceKHR )
#if defined(VK_USE_PLATFORM_WIN32_KHR)
VK_INSTANCE_LEVEL_FUNCTION( vkCreateWin32SurfaceKHR )
#elif defined(VK_USE_PLATFORM_XCB_KHR)
VK_INSTANCE_LEVEL_FUNCTION( vkCreateXcbSurfaceKHR )
#elif defined(VK_USE_PLATFORM_XLIB_KHR)
VK_INSTANCE_LEVEL_FUNCTION( vkCreateXlibSurfaceKHR )
#endif
#endif

// Tutorial 04
VK_INSTANCE_LEVEL_FUNCTION( vkGetPhysicalDeviceMemoryProperties )

#undef VK_INSTANCE_LEVEL_FUNCTION


// ************************************************************ //
// Device level functions                                       //
//                                                              //
// These functions are used mainly for drawing                  //
// ************************************************************ //

#if !defined(VK_DEVICE_LEVEL_FUNCTION)
#define VK_DEVICE_LEVEL_FUNCTION( fun )
#endif

// Tutorial 01
VK_DEVICE_LEVEL_FUNCTION( vkGetDeviceQueue )
VK_DEVICE_LEVEL_FUNCTION( vkDeviceWaitIdle )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyDevice )

// Tutorial 02
VK_DEVICE_LEVEL_FUNCTION( vkCreateSemaphore )
VK_DEVICE_LEVEL_FUNCTION( vkCreateCommandPool )
VK_DEVICE_LEVEL_FUNCTION( vkAllocateCommandBuffers )
VK_DEVICE_LEVEL_FUNCTION( vkBeginCommandBuffer )
VK_DEVICE_LEVEL_FUNCTION( vkCmdPipelineBarrier )
VK_DEVICE_LEVEL_FUNCTION( vkCmdClearColorImage )
VK_DEVICE_LEVEL_FUNCTION( vkEndCommandBuffer )
VK_DEVICE_LEVEL_FUNCTION( vkQueueSubmit )
VK_DEVICE_LEVEL_FUNCTION( vkFreeCommandBuffers )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyCommandPool )
VK_DEVICE_LEVEL_FUNCTION( vkDestroySemaphore )
#if defined(USE_SWAPCHAIN_EXTENSIONS)
VK_DEVICE_LEVEL_FUNCTION( vkCreateSwapchainKHR )
VK_DEVICE_LEVEL_FUNCTION( vkGetSwapchainImagesKHR )
VK_DEVICE_LEVEL_FUNCTION( vkAcquireNextImageKHR )
VK_DEVICE_LEVEL_FUNCTION( vkQueuePresentKHR )
VK_DEVICE_LEVEL_FUNCTION( vkDestroySwapchainKHR )
#endif

// Tutorial 03
VK_DEVICE_LEVEL_FUNCTION( vkCreateImageView )
VK_DEVICE_LEVEL_FUNCTION( vkCreateRenderPass )
VK_DEVICE_LEVEL_FUNCTION( vkCreateFramebuffer )
VK_DEVICE_LEVEL_FUNCTION( vkCreateShaderModule )
VK_DEVICE_LEVEL_FUNCTION( vkCreatePipelineLayout )
VK_DEVICE_LEVEL_FUNCTION( vkCreateGraphicsPipelines )
VK_DEVICE_LEVEL_FUNCTION( vkCmdBeginRenderPass )
VK_DEVICE_LEVEL_FUNCTION( vkCmdBindPipeline )
VK_DEVICE_LEVEL_FUNCTION( vkCmdDraw )
VK_DEVICE_LEVEL_FUNCTION( vkCmdEndRenderPass )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyShaderModule )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyPipelineLayout )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyPipeline )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyRenderPass )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyFramebuffer )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyImageView )

// Tutorial 04
VK_DEVICE_LEVEL_FUNCTION( vkCreateFence )
VK_DEVICE_LEVEL_FUNCTION( vkCreateBuffer )
VK_DEVICE_LEVEL_FUNCTION( vkGetBufferMemoryRequirements )
VK_DEVICE_LEVEL_FUNCTION( vkAllocateMemory )
VK_DEVICE_LEVEL_FUNCTION( vkBindBufferMemory )
VK_DEVICE_LEVEL_FUNCTION( vkMapMemory )
VK_DEVICE_LEVEL_FUNCTION( vkFlushMappedMemoryRanges )
VK_DEVICE_LEVEL_FUNCTION( vkUnmapMemory )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetViewport )
VK_DEVICE_LEVEL_FUNCTION( vkCmdSetScissor )
VK_DEVICE_LEVEL_FUNCTION( vkCmdBindVertexBuffers )
VK_DEVICE_LEVEL_FUNCTION( vkWaitForFences )
VK_DEVICE_LEVEL_FUNCTION( vkResetFences )
VK_DEVICE_LEVEL_FUNCTION( vkFreeMemory )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyBuffer )
VK_DEVICE_LEVEL_FUNCTION( vkDestroyFence )

// Tutorial 05
VK_DEVICE_LEVEL_FUNCTION( vkCmdCopyBuffer )

#undef VK_DEVICE_LEVEL_FUNCTION