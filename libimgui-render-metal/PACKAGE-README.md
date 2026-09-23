# libimgui-render-metal - Dear ImGui renderer backend for Metal

This is a `build2` package for the [Dear ImGui](https://github.com/ocornut/imgui)
Metal renderer backend, built from its `docking` branch. It renders
`libimgui` draw data using Metal, via the C++ `libmetal-cpp` binding
rather than the Objective-C Metal API (this package compiles with
`IMGUI_IMPL_METAL_CPP` defined, so `MTL::Device*` etc. are used instead of
`id<MTLDevice>`, and the public header is plain C++, not Objective-C++). A
platform backend (for example `libimgui-platform-osx`) is also needed.
The public header is `<backends/imgui_impl_metal.h>`.
`#include "imgui_impl_metal.h"` also works.

This package is macOS-only.


## Usage

To start using `libimgui-render-metal` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libimgui-render-metal ^1.92.9
```

Then import the library in your `buildfile`:

```
import libs = libimgui-render-metal%lib{imgui-render-metal}
```


## Importable targets

This package provides the following importable targets:

```
lib{imgui-render-metal}
```


## Configuration variables

This package provides no configuration variables.
