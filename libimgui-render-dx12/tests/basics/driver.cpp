// Smoke test: this backend is Windows-only (see manifest and src/buildfile).
// On other platforms the library is intentionally empty, so there is
// nothing to test there. The header itself is also Windows-only in
// practice: it pulls in <d3d12sdklayers.h>, whose WSL-stub fallback (from
// libdirectx-headers, for non-Windows tooling) does not fully define
// IUnknown on its own, so don't even attempt to parse it here.
//
// Every entry point needs a D3D12 device, so they are only referenced: the
// test runs without arguments so the branch is never taken, but the symbols
// still have to resolve at link time.

#ifdef _WIN32
#include <imgui/backends/imgui_impl_dx12.h>

int main (int argc, char*[])
{
  if (argc > 1)
  {
    ImGui_ImplDX12_InitInfo* info (nullptr);
    ImGui_ImplDX12_Init (info);
    ImGui_ImplDX12_NewFrame ();
    ImGui_ImplDX12_Shutdown ();
  }
}
#else
int main ()
{
}
#endif
