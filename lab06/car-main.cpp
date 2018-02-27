#include <iostream>
#include <string>
#include "Car.cpp"

using namespace std;

int main()
{
    Car hotRod(2017, "Mazda");

    cout << "I'm in my " << hotRod.getYear() << " " << hotRod.getMake() << " hot rod.\n\n";

    cout << "I'm accelerating ... \n\n";
    for (int faster = 1; faster <= 5; faster++)
    {
        hotRod.accelerate();
        cout << "Current speed: " << hotRod.getSpeed() << " mph. \n";
    }

    cout << "\nNow I'm braking ... \n\n";
    for (int slower = 1; slower <= 5; slower++)
    {
        hotRod.brake();
        cout << "Current speed: " << hotRod.getSpeed() << " mph. \n";
    }
    return 0;
}