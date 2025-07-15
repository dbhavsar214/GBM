//
// Created by Divy2 on 17-06-2025.
//
#include "StockData.h"
#include<vector>

#ifndef PARAMETERCALCULATION_H
#define PARAMETERCALCULATION_H

class ParameterCalculation {
public:
    ParameterCalculation(const std::vector<StockData> &data);

    std::vector<double> calculatelogValues() const;

    double calculateMean() const;

    double calculateVolatility() const;

    double calculateZScore() const;

private:
    std::vector<StockData> stockData;
    std::vector<double> logReturns;

    void computeLogReturns();
};


#endif //PARAMETERCALCULATION_H
