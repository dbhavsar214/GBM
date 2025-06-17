#include <iostream>
#include "./include/CSVReader.h"
#include "./include/ParameterCalculation.h"
#include "./include/GBM.h"
#include<iomanip>
#include<algorithm>

int main() {
    auto data = CSVReader::readCSV("../data/exon.csv");
    std::reverse(data.begin(), data.end());

    ParameterCalculation pc(data);
    GBM gbm;

    double mean = pc.calculateMean();
    double volatility  = pc.calculateVolatility();
    double zScore = pc.calculateZScore();

    std::cout << "Mean : " << mean << std::endl;
    std::cout << "volatility : " << volatility << std::endl;
    std::cout << "z - Score : " << zScore << std::endl;

    double eValue = gbm.simulatePrice(112.48,mean,volatility,zScore,252);
    std::cout <<"estimated Value : " << eValue;

    return 0;
}
