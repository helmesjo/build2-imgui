#include <imgui_impl_metal.h>

#undef NDEBUG
#include <cassert>

// Smoke test: creating a real MTL::Device needs a GPU, which a headless CI
// runner may not have, so this only proves the library links, the
// metal-cpp (C++, not Objective-C++) API surface is what's declared (see
// IMGUI_IMPL_METAL_CPP in src/buildfile), and the symbols resolve.

int main ()
{
  assert ((void*) &ImGui_ImplMetal_Init     != nullptr);
  assert ((void*) &ImGui_ImplMetal_Shutdown != nullptr);
}
