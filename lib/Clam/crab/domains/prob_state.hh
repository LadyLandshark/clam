#pragma once

#include <crab/domains/prob_state.hpp>
#include "crab_defs.hh"

namespace clam {
using BASE(prob_state_domain_t) = ikos::prob_state_domain<number_t, region_subdom_varname_t>;
using prob_state_domain_t = RGN_FUN(ARRAY_FUN(BOOL_NUM(BASE(prob_state_domain_t))));
} // end namespace clam
