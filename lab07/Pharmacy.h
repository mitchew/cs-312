// price of five types of medication
// update charges variable of patientaccount class
#ifndef PHARMACY_H
#define PHARMACY_H
class Pharmacy
{
    private:
    double pharmacyCharge;

    public:
    Pharmacy();
    void updateAccount(PatientAccount&, int);
    double getPharmacyCharge();
};
#endif