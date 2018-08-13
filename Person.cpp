#include "Person.h"

Person::Person()
{
    cout<<"I would like to make a Person class where I can define a Person's characteristics :-)"<<endl;
}
void Person::setEyeColor(string colorIn)
{
    eyeColor = colorIn;

}

string Person::getEyeColor()
{

    return eyeColor;
}
