#include <iostream>
#include "FactChecker.h"
#include "BiasAnalyzer.h"
#include "Reporting.h"

int main() {
    std::cout << "QuantaQuilida application starting..." << std::endl;

    FactChecker factChecker(std::cout);
    BiasAnalyzer biasAnalyzer(std::cout);
    Reporting reporting(std::cout);

    factChecker.check();
    biasAnalyzer.analyze();
    reporting.generateReport();

    std::cout << "QuantaQuilida application finished." << std::endl;

    return 0;
}
