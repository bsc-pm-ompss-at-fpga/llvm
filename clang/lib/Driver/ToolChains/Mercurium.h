//===--- Mercurium.h - Mercurium ToolChain Implementations ------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_LIB_DRIVER_TOOLCHAINS_MERCURIUM_H
#define LLVM_CLANG_LIB_DRIVER_TOOLCHAINS_MERCURIUM_H

#include "clang/Driver/Tool.h"
#include "clang/Driver/ToolChain.h"

namespace clang {
namespace driver {
namespace tools {
namespace mercurium {
class LLVM_LIBRARY_VISIBILITY Mercurium : public Tool {
public:
  Mercurium(const ToolChain &TC) : Tool("mercurium::Mercurium", "mcc", TC) {}
  ~Mercurium() override = default;

  bool hasIntegratedCPP() const override { return false; }

  void ConstructJob(Compilation &C, const JobAction &JA,
                    const InputInfo &Output, const InputInfoList &Inputs,
                    const llvm::opt::ArgList &TCArgs,
                    const char *LinkingOutput) const override;
};
} // namespace mercurium
} // namespace tools
} // end namespace driver
} // end namespace clang

#endif // LLVM_CLANG_LIB_DRIVER_TOOLCHAINS_MERCURIUM_H