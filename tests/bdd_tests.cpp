#include "bdd_tests.h"
#include "../src/FactChecker.h"
#include "../src/BiasAnalyzer.h"
#include "../src/Reporting.h"
#include <cassert>
#include <sstream>
#include <string>

void bdd_test_fact_checker() {
    // Feature: Fact Checking
    // Scenario: The FactChecker component runs its check
    std::stringstream ss;

    // Given a FactChecker instance
    FactChecker checker(ss);

    // When the check is performed
    checker.check();

    // Then the output should indicate that the check was performed
    assert(ss.str() == "FactChecker is checking...\n");
}

void bdd_test_bias_analyzer() {
    // Feature: Bias Analysis
    // Scenario: The BiasAnalyzer component runs its analysis
    std::stringstream ss;

    // Given a BiasAnalyzer instance
    BiasAnalyzer analyzer(ss);

    // When the analysis is performed
    analyzer.analyze();

    // Then the output should indicate that the analysis was performed
    assert(ss.str() == "BiasAnalyzer is analyzing...\n");
}

void bdd_test_reporting() {
    // Feature: Reporting
    // Scenario: The Reporting component generates a report
    std::stringstream ss;

    // Given a Reporting instance
    Reporting reporting(ss);

    // When the report is generated
    reporting.generateReport();

    // Then the output should indicate that the report was generated
    assert(ss.str() == "Reporting is generating a report...\n");
}

void run_bdd_tests() {
    bdd_test_fact_checker();
    bdd_test_bias_analyzer();
    bdd_test_reporting();
}
