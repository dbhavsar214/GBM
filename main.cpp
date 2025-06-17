#include <iostream>
#include "./include/CSVReader.h"
#include "./include/ParameterCalculation.h"
#include<iomanip>
#include<algorithm>

int main() {
    auto data = CSVReader::readCSV("../data/tesla.csv");
    std::reverse(data.begin(), data.end());

    ParameterCalculation pc(data);

    double mean = pc.calculateMean();
    double volatility  = pc.calculateVolatility();
    double zScore = pc.calculateZScore();

    std::cout << "Mean : " << mean << std::endl;
    std::cout << "volatility : " << volatility << std::endl;
    std::cout << "z - Score : " << zScore << std::endl;



    return 0;
}
