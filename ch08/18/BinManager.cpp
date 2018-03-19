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
    int currentQty = bin[binIndex].getQty();

    currentQty += q;
    bin[binIndex].setQty(currentQty);

    return true;
}

bool BinManager::removeParts(int binIndex, int q)
{
    int currentQty = bin[binIndex].getQty();

    if (currentQty < q)
    {
        return false;
    }

    currentQty -= q;
    bin[binIndex].setQty(currentQty);

    return true;
}