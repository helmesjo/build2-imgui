#include <imgui_impl_osx.h>

#undef NDEBUG
#include <cassert>

// Smoke test: every entry point needs a live NSView, which needs a window
// server connection -- not safe to assume in a headless CI environment.
// Just prove the library links and the symbols resolve.

int main ()
{
  assert ((void*) &ImGui_ImplOSX_Init     != nullptr);
  assert ((void*) &ImGui_ImplOSX_Shutdown != nullptr);
  assert ((void*) &ImGui_ImplOSX_NewFrame != nullptr);
}
