//
// Created by Divy2 on 17-06-2025.
//
#include<../include/GBM.h>
#include<cmath>

double GBM::simulatePrice(double currentPrice, double mean, double volatility, double zScore, double aheadOfTime) {
    double expo = (mean - 0.5 * volatility * volatility) * aheadOfTime + volatility * std::sqrt(aheadOfTime) * zScore;
    double estimatedValue = currentPrice * std::exp(expo);
    return estimatedValue;
}

