Чтобы попробовать:

```cmd
git clone https://github.com/microsoft/vcpkg
cd vcpkg
bootstrap-vcpkg.bat
cd ..
git clone https://github.com/eao197/vs-several-prj-cmake-demo
```

Очень важно, чтобы каталоги `vcpkg` и `vs-several-prj-cmake-demo` располагались на одном уровне, например:

```
c:/experiments/
`- vcpkg/
   `- vcpkg.exe
   `- ports/
   `- scripts/
   `- ...
`- vs-several-prj-cmake-demo/
   `- CMakeLists.txt
   `- ...
```

Далее, если используется командная строка:

```cmd
cd vs-several-prj-cmake-demo
_configure_cmake_ninja_debug.bat
cmake --build cmake_build_debug --config Debug
ctest --test-dir cmake_build_debug
```

Либо же в Visual Studio просто открывается CMakeLists.txt, который лежит в корне `vs-several-prj-cmake-demo`.
