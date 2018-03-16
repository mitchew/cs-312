#include <string>
#include "BinManager.h"
#include "InvBin.h"

BinManager::BinManager()
{
    numBins = 0;
}

BinManager::BinManager(int size, std::string d[], int q[])
{
    numBins = size;
    
    for (int i = 0; i < numBins; i++)
    {
        InvBin item(d[i], q[i]);
        bin[i] = item;
    }
}

std::string BinManager::getDescription(int index) const
{
    return bin[index].getDescription();
}

int BinManager::getQuantity(int index) const
{
    return bin[index].getQty();
}

bool BinManager::addParts(int binIndex, int q)
{
    bin[binIndex].setQty(q);
    return true;
}

bool BinManager::removeParts(int BinIndex, int q)
{
    return true;
}