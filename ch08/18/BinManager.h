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
        std::string getDescription(int) const;
        int getQuantity(int) const;
        bool addParts(int, int);
        bool removeParts(int, int);
};
#endif