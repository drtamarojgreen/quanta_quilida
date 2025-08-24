#ifndef REPORTING_H
#define REPORTING_H

#include <ostream>

class Reporting {
public:
    Reporting(std::ostream& out);
    void generateReport();

private:
    std::ostream& out_stream;
};

#endif // REPORTING_H
