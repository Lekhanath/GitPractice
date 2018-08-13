#include <iostream>
#include "Car.h"
#include "Person.h"
#include "Camel.h"
#include "Animal.h"
#include "Duck.h"
#include "BabyDuck.h"


using namespace std;

int main()
{
    Car Betsy;
    Person Bill;
    Person Sally;
    Animal Bossy;


    Betsy.setNumOfHeadlights(4);
    cout << Betsy.getNumOfHeadlights() <<endl;
    cout << Betsy.getHeadlightStatus() <<endl;
    Betsy.setHeadlightStatus(true);
    cout <<Betsy.getHeadlightStatus() <<endl;
    Betsy.setHeadlightStatus(false);
    cout <<Betsy.getHeadlightStatus() <<endl;

    cout << "###################################"<< endl;

    Bill.setEyeColor("Brown");
    cout<< Bill.getEyeColor()<<endl;
    Sally.setEyeColor("Blue");
    cout<<Sally.getEyeColor()<<endl;

    Bossy.setNumOfEyes(2);
    Bossy.setNumOfToes(8);
    cout<< Bossy.getNumOfEyes()<<endl;
    cout<< Bossy.getNumOfToes()<<endl;


    cout << "############### let' do it by class inheritance Of Animal class for Joe in Camel class ####################"<< endl;

    Camel Joe;
    Joe.setNumOfEyes(2);
    Joe.setNumOfHumps(1);
    cout<<Joe.getNumOfEyes()<<endl;
    cout << Joe.getNumOfHumps()<<endl;

    cout << "###################################"<< endl;

    Duck Donald;
    BabyDuck Huey;



    Donald.fly();
    Donald.talk();
    Huey.fly();
    Huey.talk();
    Huey.Duck::talk();
    Huey.adultTalk();


    return 0;
}
