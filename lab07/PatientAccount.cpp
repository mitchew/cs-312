#include "PatientAccount.h"
#include <iostream>
PatientAccount::PatientAccount()
{
    daysStayed = 0;
    dailyRate = 700;
    surgeryCharge = 0;
    pharmacyCharge = 0;
}
void PatientAccount::setDays()
{
    std::cout << "Enter days: ";
    std::cin >> daysStayed;
}

int PatientAccount::getDays()
{
    return daysStayed;
}

void PatientAccount::addPharmacyCharge(int charge)
{
    pharmacyCharge += charge;
}

int PatientAccount::getPharmacyCharge()
{
    return pharmacyCharge;
}

void PatientAccount::addSurgeryCharge(int charge)
{
    surgeryCharge += charge;
}

void PatientAccount::setDailyRate(int rate)
{
    dailyRate = rate;
}

int PatientAccount::getDailyRate()
{
    return dailyRate;
}

double PatientAccount::getTotalCharges()
{
    return (dailyRate * daysStayed) + surgeryCharge + pharmacyCharge;
}

void PatientAccount::updateAccount(PatientAccount& acct, int a)
{
    acct.setDailyRate(a);
}