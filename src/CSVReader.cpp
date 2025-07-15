//
// Created by Divy2 on 16-06-2025.
//
#include "../include/CSVReader.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include<string>
#include<algorithm>

std::string cleanPriceString(std::string s) {
    s.erase(std::remove(s.begin(), s.end(), '$'), s.end());
    s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());
    return s;
}

std::vector<StockData> CSVReader::readCSV(const std::string& filename) {
    std::vector<StockData> data;
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cout << filename;
        std::cerr << "Could not open file: " << filename << std::endl;
        return data;
    }

    std::string line;
    bool firstLine = true;

    while (std::getline(file, line)) {
        if (firstLine) {
            firstLine = false;
            continue;
        }

        std::stringstream ss(line);
        std::string item;
        StockData record;

        //extract date
        std::getline(ss, item, ',');
        record.date = item;

        //extract closing price
        std::getline(ss, item, ',');
        record.closed = std::stod(cleanPriceString(item));


        data.push_back(record);
    }

    file.close();
    return data;
}
