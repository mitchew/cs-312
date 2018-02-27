#include "Inventory.h"

Inventory::Inventory()
{
    itemNumber = 0;
    quantity = 0;
    cost = 0;
}

Inventory::Inventory(int i, int q, double c)
{
    setItemNumber(i);
    setQuantity(q);
    setCost(c);
}

void Inventory::setItemNumber(int a)
{
    itemNumber = a;
}

void Inventory::setQuantity(int a)
{
    quantity = a;
}

void Inventory::setCost(double a)
{
    cost = a;
}

int Inventory::getItemNumber()
{
    return itemNumber;
}

int Inventory::getQuantity()
{
    return quantity;
}

double Inventory::getCost()
{
    return cost;
}

double Inventory::getTotalCost()
{
    double totalCost;

    totalCost = quantity * cost;
    
    return totalCost;
}