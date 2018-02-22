class Square
{
    private:
        double side;
        double perimeter;
        double area;

    public:
        Square(double s)
        {
            side = s;
        }

        void setSide(double s)
        {
            side = s;
        }

        double getSide()
        {
            return side;
        }

        void setPerimeter()
        {
            perimeter = getSide() * 4;
        }

        double getPerimeter()
        {
            return perimeter;
        }

        void setArea()
        {
            area = getSide() * getSide();
        }

        double getArea()
        {
            return area;
        }
};