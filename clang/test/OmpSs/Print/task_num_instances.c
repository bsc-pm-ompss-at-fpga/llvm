// RUN: %clang_cc1 -verify -fompss-2 -ast-print %s | FileCheck %s
// expected-no-diagnostics

#pragma oss task device(fpga) num_instances(1)
void foo() {}

// CHECK: #pragma oss task device(fpga) num_instances(1)
// CHECK-NEXT: void foo()
