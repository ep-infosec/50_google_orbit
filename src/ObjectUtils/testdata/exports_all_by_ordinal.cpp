// Copyright (c) 2022 The Orbit Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Compile on Windows with
//   cl /LD exports_all_by_ordinal.cpp exports_all_by_ordinal.def
// Make sure you are using the 64-bit flavor of the compiler,
// for example, by using the 64-bit Visual Studio command prompt.

#include <iostream>

extern "C" void PrintHelloWorldNoname1() { std::cout << "Hello World!" << std::endl; }

extern "C" void PrintHelloWorldNoname2() { std::cout << "Hello World!" << std::endl; }
