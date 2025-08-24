#include "Reporting.h"

Reporting::Reporting(std::ostream& out) : out_stream(out) {
    // Constructor
}

void Reporting::generateReport() {
    out_stream << "Reporting is generating a report..." << std::endl;
}
