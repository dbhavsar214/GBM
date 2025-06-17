//
// Created by Divy2 on 16-06-2025.
//

#ifndef CSVREADER_H
#define CSVREADER_H

#include <vector>
#include <string>
#include "StockData.h"

class CSVReader {
public:
    static std::vector<StockData> readCSV(const std::string& filename);
};

#endif //CSVREADER_H
