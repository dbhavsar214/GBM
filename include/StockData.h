//
// Created by Divy2 on 16-06-2025.
//

#ifndef STOCKDATA_H
#define STOCKDATA_H

#include <string>

struct StockData {
    std::string date;
    double closed;
    long long volume;
    double open;
    double high;
    double low;
};
#endif //STOCKDATA_H
