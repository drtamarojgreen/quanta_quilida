#include "unit_tests.h"
#include "../src/FactChecker.h"
#include "../src/BiasAnalyzer.h"
#include "../src/Reporting.h"
#include <cassert>
#include <sstream>
#include <string>

void test_fact_checker() {
    std::stringstream ss;
    FactChecker checker(ss);
    checker.check();
    assert(ss.str() == "FactChecker is checking...\n");
}

void test_bias_analyzer() {
    std::stringstream ss;
    BiasAnalyzer analyzer(ss);
    analyzer.analyze();
    assert(ss.str() == "BiasAnalyzer is analyzing...\n");
}

void test_reporting() {
    std::stringstream ss;
    Reporting reporting(ss);
    reporting.generateReport();
    assert(ss.str() == "Reporting is generating a report...\n");
}

void run_unit_tests() {
    test_fact_checker();
    test_bias_analyzer();
    test_reporting();
}
