class Pop
{
    private:
        int population;
        double annualBirths;
        double annualDeaths;

    public:
        Pop()
        {

        }
        Pop(int p, double b, double d)
        {
            population = p;
            annualBirths = b;
            annualDeaths = d;
        }

        int getPopulation()
        {
            return population;
        }

        void setPopulation(int a)
        {
            population = a;
        }

        double getAnnualBirths()
        {
            return annualBirths;
        }

        void setAnnualBirths(double a)
        {
            annualBirths = a;
        }

        double getAnnualDeaths()
        {
            return annualDeaths;
        }

        double getBirthRate()
        {
            return (annualBirths / population);
        }

        double getDeathRate()
        {
            return (annualDeaths / population);
        }

        void setDeaths(double a)
        {
            annualDeaths = a;
        }

        void setBirths(double a)
        {
            annualBirths = a;
        }
};