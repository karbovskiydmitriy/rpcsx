#include "code-generator.hpp"

CodeGenerator codegen;

void CodeGenerator::makeAbsoluteTrampoline(uint64_t address) {
  reset();
  mov(rax, address);
  jmp(rax);
}