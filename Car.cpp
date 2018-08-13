#include "Car.h"
#include <iostream>

using namespace std;

Car::Car()
{
   cout << "I am making car class"<< endl;
}

void Car::setNumOfHeadlights(int numIn)
{
    numOfHeadlights = numIn;
}

int Car::getNumOfHeadlights()
{

    return numOfHeadlights;

}

void Car::setHeadlightStatus(bool statusIn)
{

    headlightStatus = statusIn;

}

bool Car::getHeadlightStatus()
{

    return headlightStatus;

}
