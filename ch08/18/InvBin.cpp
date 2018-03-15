#include "InvBin.h"
#include <string>

InvBin::InvBin(std::string d = "empty", int q = 0)
{
    description = d;
    qty = q;
}

void InvBin::setDescription(std::string d)
{
    description = d;
}

std::string InvBin::getDescription() const
{
    return description;
}

void InvBin::setQty(int q)
{
    qty = q;
}

int InvBin::getQty() const
{
    return qty;
}