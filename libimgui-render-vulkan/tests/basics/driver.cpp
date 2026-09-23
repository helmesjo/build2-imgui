#include <backends/imgui_impl_vulkan.h>

#undef NDEBUG
#include <cassert>

// Smoke test: most entry points need a Vulkan instance or device, and
// creating one fails on a machine without a Vulkan driver. So call a helper
// that needs neither and only reference the rest: the test runs without
// arguments so the branch is never taken, but the symbols (including the
// Vulkan loader's, through the transitive <vulkan/vulkan.h>) still have to
// resolve at link time.

int main (int argc, char*[])
{
  assert (ImGui_ImplVulkanH_GetMinImageCountFromPresentMode (
            VK_PRESENT_MODE_FIFO_KHR) == 2);

  if (argc > 1)
  {
    vkCreateInstance (nullptr, nullptr, nullptr);
    ImGui_ImplVulkan_Init (nullptr);
    ImGui_ImplVulkan_NewFrame ();
    ImGui_ImplVulkan_Shutdown ();
  }
}
