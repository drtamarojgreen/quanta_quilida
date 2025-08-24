#include "FactChecker.h"

FactChecker::FactChecker(std::ostream& out) : out_stream(out) {
    // Constructor
}

void FactChecker::check() {
    out_stream << "FactChecker is checking..." << std::endl;
}
