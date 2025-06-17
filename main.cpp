#include <iostream>
#include "./include/CSVReader.h"
#include<iomanip>

int main() {
    auto data = CSVReader::readCSV("../data/tesla.csv");

    for (size_t i = 0; i < std::min(data.size(), size_t(250)); ++i) {
        std::cout << data[i].date << ", " << data[i].closed << ", " << data[i].volume <<", " << data[i].open <<", " << data[i].high <<", " << data[i].low<< std::endl;
    }
    return 0;
}
