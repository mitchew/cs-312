// keep total of patients charges
// keep track of number of days in hospital
// a daily rate
// setDays must prompt for days stayed
#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
class PatientAccount
{
private:
    int daysStayed;
    double dailyRate;

public:
    void setDays();
    int getDays();
    void setDailyRate(double);
    double getDailyRate();
    double getTotalCharges();
    void updateAccount(PatientAccount&, int);
};
#endif