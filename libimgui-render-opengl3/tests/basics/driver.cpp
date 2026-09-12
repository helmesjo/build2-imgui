#include <imgui_impl_opengl3.h>

// Smoke test: every entry point needs a current OpenGL context, which needs
// a real window and GPU that a headless CI environment does not have. So
// they are only referenced: the test runs without arguments so the branch
// is never taken, but the symbols still have to resolve at link time.

int main (int argc, char*[])
{
  if (argc > 1)
  {
    ImGui_ImplOpenGL3_Init ();
    ImGui_ImplOpenGL3_NewFrame ();
    ImGui_ImplOpenGL3_Shutdown ();
  }
}
