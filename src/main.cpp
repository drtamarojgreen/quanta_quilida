#include <iostream>
#include "FactChecker.h"
#include "BiasAnalyzer.h"
#include "Reporting.h"

int main() {
    std::cout << "QuantaQuilida application starting..." << std::endl;

    FactChecker factChecker;
    BiasAnalyzer biasAnalyzer;
    Reporting reporting;

    factChecker.check();
    biasAnalyzer.analyze();
    reporting.generateReport();

    std::cout << "QuantaQuilida application finished." << std::endl;

    return 0;
}
