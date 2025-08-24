#ifndef FACT_CHECKER_H
#define FACT_CHECKER_H

#include <ostream>

class FactChecker {
public:
    FactChecker(std::ostream& out);
    void check();

private:
    std::ostream& out_stream;
};

#endif // FACT_CHECKER_H
