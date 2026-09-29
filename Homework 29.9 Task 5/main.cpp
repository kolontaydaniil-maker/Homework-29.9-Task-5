#include "Car.h"
#include "Motorcycle.h"

int main()
{
    Car car;
    Motorcycle motorcycle;

    car.StartEngine();
    car.Drive();
    car.StopEngine();

    cout << endl;

    motorcycle.StartEngine();
    motorcycle.Drive();
    motorcycle.StopEngine();

    return 0;
}