#include <imgui_impl_glfw.h>

#undef NDEBUG
#include <cassert>

// Smoke test: every entry point needs a live GLFWwindow, which needs a
// display -- not safe to create in a headless CI environment. Just prove
// the library links and the symbols resolve.

int main ()
{
  assert ((void*) &ImGui_ImplGlfw_InitForOpenGL != nullptr);
  assert ((void*) &ImGui_ImplGlfw_InitForVulkan != nullptr);
  assert ((void*) &ImGui_ImplGlfw_InitForOther  != nullptr);
  assert ((void*) &ImGui_ImplGlfw_Shutdown      != nullptr);
  assert ((void*) &ImGui_ImplGlfw_NewFrame      != nullptr);
}
