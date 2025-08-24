#ifndef BIAS_ANALYZER_H
#define BIAS_ANALYZER_H

#include <ostream>

class BiasAnalyzer {
public:
    BiasAnalyzer(std::ostream& out);
    void analyze();

private:
    std::ostream& out_stream;
};

#endif // BIAS_ANALYZER_H
