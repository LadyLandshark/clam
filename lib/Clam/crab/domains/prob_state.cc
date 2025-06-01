#include <clam/config.h>
#include <clam/CrabDomain.hh>
#include <clam/RegisterAnalysis.hh>
#include "prob_state.hh"


namespace clam {
#ifdef INCLUDE_ALL_DOMAINS
REGISTER_DOMAIN(clam::CrabDomain::PROB_STATE, prob_state_domain)
#else
UNREGISTER_DOMAIN(prob_state_domain)
#endif  
} // end namespace clam

