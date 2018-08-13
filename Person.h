#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>


using namespace std;

class Person
{
    public:
        Person();
        void setEyeColor(string colorIn);
        string getEyeColor();


    private:

        string eyeColor;


};

#endif // PERSON_H
