#include "BiasAnalyzer.h"

BiasAnalyzer::BiasAnalyzer(std::ostream& out) : out_stream(out) {
    // Constructor
}

void BiasAnalyzer::analyze() {
    out_stream << "BiasAnalyzer is analyzing..." << std::endl;
}
