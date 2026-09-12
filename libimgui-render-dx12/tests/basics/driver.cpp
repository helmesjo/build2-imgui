// This backend is Windows-only (see manifest and src/buildfile); on other
// platforms the library is intentionally empty, so there is nothing to
// link-test here. The header itself is also Windows-only in practice: it
// pulls in <d3d12sdklayers.h>, whose WSL-stub fallback (from
// libdirectx-headers, for non-Windows tooling) does not fully define
// IUnknown on its own, so don't even attempt to parse it here.

#ifdef _WIN32
#include <imgui_impl_dx12.h>
#endif

#undef NDEBUG
#include <cassert>

int main ()
{
#ifdef _WIN32
  // ImGui_ImplDX12_Init() is overloaded, so its address is ambiguous
  // without a cast; Shutdown()/NewFrame() are enough to prove linkage.
  //
  assert ((void*) &ImGui_ImplDX12_Shutdown != nullptr);
  assert ((void*) &ImGui_ImplDX12_NewFrame != nullptr);
#endif
}
