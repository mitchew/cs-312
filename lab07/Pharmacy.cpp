#include "PatientAccount.h"
#include "Pharmacy.h"
Pharmacy::Pharmacy()
{
    pharmacyCharge = 0;
}

void Pharmacy::updateAccount(PatientAccount& acct, int a)
{
    if (a == 1)
    {
        pharmacyCharge += 10;
    }
    else if (a == 2)
    {
        pharmacyCharge += 20;
    }
    else if (a == 3)
    {
        pharmacyCharge += 50;
    }
    else if (a == 4)
    {
        pharmacyCharge += 75;
    }
    else if (a == 5)
    {
        pharmacyCharge += 300;
    }
    
    acct.addPharmacyCharge(pharmacyCharge);
}

double Pharmacy::getPharmacyCharge()
{
    return pharmacyCharge;
}