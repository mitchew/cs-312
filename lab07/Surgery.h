// store at least five types of surgery
// update charges variable of patientaccount class
#ifndef SURGERY_H
#define SURGERY_H
class Surgery
{
    private:
    double charge;

    public:
    void updateAccount(PatientAccount&, int);
    double getSurgeryCharge();
};
#endif