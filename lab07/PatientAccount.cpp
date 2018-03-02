#include "PatientAccount.h"
void PatientAccount::setDays()
{
    daysStayed = daysStayed;
}

int PatientAccount::getDays()
{
    return daysStayed;
}

void PatientAccount::setDailyRate(double rate)
{
    dailyRate = rate;
}

double PatientAccount::getDailyRate()
{
    return dailyRate;
}

double PatientAccount::getTotalCharges()
{
    return (dailyRate * daysStayed);
}