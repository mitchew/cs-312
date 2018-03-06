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
    int dailyRate;
    int surgeryCharge;
    int pharmacyCharge;

public:
    PatientAccount();
    void setDays();
    int getDays();
    void addSurgeryCharge(int);
    int getSurgeryCharge();
    void addPharmacyCharge(int);
    int getPharmacyCharge();
    void setDailyRate(int);
    int getDailyRate();
    double getTotalCharges();
    void updateAccount(PatientAccount&, int);
};
#endif