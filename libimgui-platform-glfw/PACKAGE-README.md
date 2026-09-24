# libimgui-platform-glfw - Dear ImGui platform backend for GLFW

This is a `build2` package for the [Dear ImGui](https://github.com/ocornut/imgui)
GLFW platform (input/window) backend, built from its `docking` branch. It
handles mouse, keyboard, gamepad, and window input for `libimgui` via
[GLFW](https://www.glfw.org). A renderer backend (for example
`libimgui-render-vulkan` or `libimgui-render-opengl3`) is also needed.
The public header is `<imgui/backends/imgui_impl_glfw.h>`.
`#include <backends/imgui_impl_glfw.h>` and `#include "imgui_impl_glfw.h"` also work.


## Usage

To start using `libimgui-platform-glfw` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libimgui-platform-glfw ^1.92.9
```

Then import the library in your `buildfile`:

```
import libs = libimgui-platform-glfw%lib{imgui-platform-glfw}
```


## Importable targets

This package provides the following importable targets:

```
lib{imgui-platform-glfw}
```


## Configuration variables

This package provides no configuration variables.
