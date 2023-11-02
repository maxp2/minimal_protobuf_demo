# Description

Minimal example to show how to compile Google Protobuf and 
use the [text format (textproto, .txtpb)][Google_textpb] in 
C++.

Does not use CMake

# Dependencies

- C++ Standard Library
  - Should come with the compiler
- pthreads library
  - Should come with the system
  - The program compiles without it but gives seemingly 
    random results and exceptions.
- protobuf library (libprotobuf.so.20)
- GCC

Tested with this GCC version:

```
user@host:path>g++ -v
Using built-in specs.
COLLECT_GCC=g++
COLLECT_LTO_WRAPPER=/usr/lib64/gcc/x86_64-suse-linux/7/lto-wrapper
OFFLOAD_TARGET_NAMES=hsa:nvptx-none
Target: x86_64-suse-linux
Configured with: ../configure --prefix=/usr --infodir=/usr/share/info --mandir=/usr/share/man --libdir=/usr/lib64 --libexecdir=/usr/lib64 --enable-languages=c,c++,objc,fortran,obj-c++,ada,go --enable-offload-targets=hsa,nvptx-none, --without-cuda-driver --enable-checking=release --disable-werror --with-gxx-include-dir=/usr/include/c++/7 --enable-ssp --disable-libssp --disable-libvtv --disable-libcc1 --disable-plugin --with-bugurl=https://bugs.opensuse.org/ --with-pkgversion='SUSE Linux' --with-slibdir=/lib64 --with-system-zlib --enable-libstdcxx-allocator=new --disable-libstdcxx-pch --enable-version-specific-runtime-libs --with-gcc-major-version-only --enable-linker-build-id --enable-linux-futex --enable-gnu-indirect-function --program-suffix=-7 --without-system-libunwind --enable-multilib --with-arch-32=x86-64 --with-tune=generic --build=x86_64-suse-linux --host=x86_64-suse-linux
Thread model: posix
gcc version 7.5.0 (SUSE Linux)
```

# Compilation

For Bash:

```
protoc --cpp_out=./outputs my_message.proto;\
 g++ \
 -pthread\
 -l protobuf\
 -o ./outputs/protobuf_minimal\
 ./main.cpp\
 ./outputs/mymessage.pb.cc &> ./build.log;\
 less ./build.log;\
 ./outputs/protobuf_minimal
```
"q" to quit less

[Google_textpb]: https://protobuf.dev/reference/protobuf/textformat-spec
