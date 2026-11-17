#ifndef BACKENDS_P4TOOLS_MODULES_SMITH_REGISTER_H_
#define BACKENDS_P4TOOLS_MODULES_SMITH_REGISTER_H_

#include "backends/p4tools/modules/smith/targets/bmv2/register.h"
#include "backends/p4tools/modules/smith/targets/generic/register.h"
#include "backends/p4tools/modules/smith/targets/nic/register.h"
#include "backends/p4tools/modules/smith/targets/tofino/register.h"


namespace P4::P4Tools::P4Smith {

inline void registerSmithTargets() {
    bmv2RegisterSmithTarget();
    genericRegisterSmithTarget();
    nicRegisterSmithTarget();
    tofinoRegisterSmithTarget();
}

}  // namespace P4::P4Tools::P4Smith

#endif /* BACKENDS_P4TOOLS_MODULES_SMITH_REGISTER_H_ */
