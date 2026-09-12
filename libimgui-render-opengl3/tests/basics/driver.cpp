#include <imgui_impl_opengl3.h>

#undef NDEBUG
#include <cassert>

// Smoke test: ImGui_ImplOpenGL3_Init() needs a current OpenGL context,
// which needs a real window/GPU -- not safe to assume in a headless CI
// environment. Just prove the library links and the symbols resolve.

int main ()
{
  assert ((void*) &ImGui_ImplOpenGL3_Init     != nullptr);
  assert ((void*) &ImGui_ImplOpenGL3_Shutdown != nullptr);
  assert ((void*) &ImGui_ImplOpenGL3_NewFrame != nullptr);
}
