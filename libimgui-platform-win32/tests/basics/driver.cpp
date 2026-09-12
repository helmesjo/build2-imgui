#include <imgui_impl_win32.h>

#undef NDEBUG
#include <cassert>

// This backend is Windows-only (see manifest and src/buildfile); on other
// platforms the library is intentionally empty, so there is nothing to
// link-test here.

int main ()
{
#ifdef _WIN32
  assert ((void*) &ImGui_ImplWin32_Init     != nullptr);
  assert ((void*) &ImGui_ImplWin32_Shutdown != nullptr);
  assert ((void*) &ImGui_ImplWin32_NewFrame != nullptr);
#endif
}
