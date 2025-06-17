//
// Created by Divy2 on 17-06-2025.
//
#include "ParameterCalculation.h"
#include<vector>
#include<cmath>
#include<numeric>
#include<iostream>

ParameterCalculation::ParameterCalculation(const std::vector<StockData> &data)
    : stockData(data) {
    computeLogReturns();
}

void ParameterCalculation::computeLogReturns() {
    logReturns.clear();
    for (size_t i = 1; i < stockData.size(); i++) {
        double ret = std::log(stockData[i].closed / stockData[i - 1].closed);
        logReturns.push_back(ret);
    }
}

std::vector<double> ParameterCalculation::calculatelogValues() const {
    return logReturns;
}

double ParameterCalculation::calculateMean() const {
    if (logReturns.empty()) return 0.0;
    double sum = std::accumulate(logReturns.begin(), logReturns.end(), 0.0);
    return sum / logReturns.size();
}

double ParameterCalculation::calculateVolatility() const {
    double mean = calculateMean();
    double sumOfSquare = 0.0;

    if (logReturns.empty()) return 0.0;
    for (double v: logReturns) {
        sumOfSquare += (v - mean) * (v - mean);
    }
    return std::sqrt(sumOfSquare / logReturns.size());
}

double ParameterCalculation::calculateZScore() const {
    if (logReturns.size() < 2) return 0.0;

    double latest = logReturns.back();
    double mean = calculateMean();
    double stdDev = calculateVolatility();

    if (stdDev == 0.0) return 0.0;
    return (latest - mean) / stdDev;
}

double ParameterCalculation::annualizedReturn() const {
    return calculateMean() * 252.0;
}

double ParameterCalculation::annualizedVolatility() const {
    return calculateVolatility() * std::sqrt(252.0);
}


