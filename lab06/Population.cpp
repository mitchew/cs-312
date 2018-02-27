class Population
{
    private:
        int population;
        int annualBirths;
        int annualDeaths;

    public:
        Population(int p, int b, int d)
        {
            population = p;
            annualBirths = b;
            annualDeaths = d;
        }

        int getPopulation()
        {

        }

        void setPopulation(int a)
        {
            population = a;
        }

        int getAnnualBirths()
        {
            return annualBirths;
        }

        void setAnnualBirths(int a)
        {
            annualBirths = a;
        }

        int getAnnualDeaths()
        {
            return annualDeaths;
        }

        void setAnnualBirths(int a)
        {
            annualDeaths = a;
        }
}