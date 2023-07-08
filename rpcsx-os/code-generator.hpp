#pragma once

#define XBYAK_NO_OP_NAMES
#include <xbyak/xbyak.h>

struct CodeGenerator : public Xbyak::CodeGenerator {
  void makeAbsoluteTrampoline(uint64_t address);
};