# CMake Template

This is a template CMake project.

## Directory descriptions

### /

The top-level. The CMake here defines our shippable executable and
library targets.

### /component

This is a component of an application. Generally just a logical
"chunk" for organizational purposes. Each component builds a static
library that can be linked into final shared library and/or executable
targets that are actually packaged and shipped.

There can be from 1 to N component libraries in an application.

### /test

Tests live under here, organized by component.

The CMake defines some helpers for creating tests based on a class
within a component, as long as files are named appropriately.

### /test/mocks

Mock objects live here, again organized by component. There are no
mock objects in this example.

### /vendor

3rd-party libraries which are included in the source tree live
here. Most 3rd-party libraries include their own build systems. When
they are simple, I prefer to simply replace those build systems with a
basic CMake file that builds the library as if it were part of our
application. Do whatever you like here, though.

### /vendor/gmock-1.7.0

This is an example of a vendored library with a custom CMake build
script. In this case we add gmock to the EXCLUDE_FROM_ALL list so it
is only built during `make check`. We also avoid building redundant
gtest/gmock libraries that we don't care about in our test building
model.
