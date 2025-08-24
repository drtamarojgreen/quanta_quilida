#include "unit_tests.h"
#include "bdd_tests.h"
#include <iostream>

int main() {
    std::cout << "Running tests..." << std::endl;

    run_unit_tests();
    run_bdd_tests();

    std::cout << "All tests passed." << std::endl;

    return 0;
}
