#include "PatientAccount.h"
#include "Surgery.h"
Surgery::Surgery()
{
    charge = 0;
}

void Surgery::updateAccount(PatientAccount& acct, int a)
{
    if (a == 1)
    {
        charge = 600;        
    }
    else if (a == 2)
    {
        charge = 1250;
    }
    else if (a == 3)
    {
        charge = 6000;
    }
    else if (a == 4)
    {
        charge = 12000;        
    }
    else if (a == 5)
    {
        charge == 28000;        
    }

    acct.addSurgeryCharge(charge);
}

double Surgery::getSurgeryCharge()
{
    return charge;
}