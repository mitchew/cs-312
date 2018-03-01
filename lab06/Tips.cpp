class Tips
{
    private:
    double taxRate;

    public:
    Tips(double a = 0.065)
    {
        taxRate = a;
    }

    void setTaxRate(double a)
    {
        taxRate = a;
    }

    double getTaxRate()
    {
        return taxRate;
    }

    double computeTip(double totalAmt, double tipRate)
    {
        double tax = totalAmt * taxRate;
        double subtotal = totalAmt - tax;

        return (subtotal * tipRate);
    }
};