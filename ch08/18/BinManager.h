#ifndef BINMANAGER_H
#define BINMANAGER_H
#include <string>
#include "InvBin.h"
class BinManager {
    private:
        InvBin bin[30];
        int numBins;

    public:
        BinManager();
        BinManager(int, std::string [], int []);
};
#endif