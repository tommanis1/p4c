#ifndef BACKENDS_P4TOOLS_MODULES_TESTGEN_REGISTER_H_
#define BACKENDS_P4TOOLS_MODULES_TESTGEN_REGISTER_H_

#include "backends/p4tools/modules/testgen/targets/bmv2/register.h"
#include "backends/p4tools/modules/testgen/targets/ebpf/register.h"
#include "backends/p4tools/modules/testgen/targets/pna/register.h"


namespace P4::P4Tools::P4Testgen {

inline void registerTestgenTargets() {
    bmv2RegisterTestgenTarget();
    ebpfRegisterTestgenTarget();
    pnaRegisterTestgenTarget();
}

}  // namespace P4::P4Tools::P4Testgen

#endif  /* BACKENDS_P4TOOLS_MODULES_TESTGEN_REGISTER_H_ */
