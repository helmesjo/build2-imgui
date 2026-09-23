# libimgui-render-opengl3 - Dear ImGui renderer backend for OpenGL 3

This is a `build2` package for the [Dear ImGui](https://github.com/ocornut/imgui)
OpenGL 3(+) renderer backend, built from its `docking` branch. It renders
`libimgui` draw data using OpenGL, resolving all entry points itself at
runtime (a bundled loader), with no extra dependency. A platform backend
(for example `libimgui-platform-glfw`) is also needed.
The public header is `<backends/imgui_impl_opengl3.h>`.
`#include "imgui_impl_opengl3.h"` also works.


## Usage

To start using `libimgui-render-opengl3` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libimgui-render-opengl3 ^1.92.9
```

Then import the library in your `buildfile`:

```
import libs = libimgui-render-opengl3%lib{imgui-render-opengl3}
```


## Importable targets

This package provides the following importable targets:

```
lib{imgui-render-opengl3}
```


## Configuration variables

This package provides no configuration variables.
