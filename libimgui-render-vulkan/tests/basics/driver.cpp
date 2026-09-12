#include <imgui_impl_vulkan.h>

#undef NDEBUG
#include <cassert>

// Smoke test: even loader-level vkCreateInstance() fails on a machine with
// no Vulkan ICD installed at all (verified on this very host), so it is
// not a safe thing to call unconditionally in a portable test. Just prove
// the transitive <vulkan/vulkan.h> include path and the library link both
// work, and that the backend's own symbols resolve.

int main ()
{
  assert ((void*) &vkCreateInstance != nullptr);
  assert ((void*) &ImGui_ImplVulkan_Init     != nullptr);
  assert ((void*) &ImGui_ImplVulkan_Shutdown != nullptr);
  assert ((void*) &ImGui_ImplVulkan_NewFrame != nullptr);
}
