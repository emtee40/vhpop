/*
 * $Id: parameters.cc,v 1.2 2002-01-03 12:40:08 lorens Exp $
 */
#include "parameters.h"
#include "heuristics.h"


/* ====================================================================== */
/* InvalidSearchAlgorithm */

/* Constructs an invalid search algorithm exception. */
InvalidSearchAlgorithm::InvalidSearchAlgorithm(const string& name)
  : Exception("invalid search algorithm `" + name + "'") {}


/* ====================================================================== */
/* Parameters */

/* Constructs default planning parameters. */
Parameters::Parameters()
  : search_limit(2000), time_limit(1440), search_algorithm(A_STAR),
    heuristic(*(new Heuristic("SUM"))), weight(1.0),
    flaw_order(*(new FlawSelectionOrder("LIFO"))),
    ground_actions(false), domain_constraints(false),
    transformational(false) {}


/* Selects a search algorithm from a name. */
void Parameters::set_search_algorithm(const string& name) {
  const char* n = name.c_str();
  if (strcasecmp(n, "A") == 0) {
    search_algorithm = A_STAR;
  } else if (strcasecmp(n, "IDA") == 0) {
    search_algorithm = IDA_STAR;
  } else if (strcasecmp(n, "HC") == 0) {
    search_algorithm = HILL_CLIMBING;
  } else {
    throw InvalidSearchAlgorithm(name);
  }
}
