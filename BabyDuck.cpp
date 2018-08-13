#include "BabyDuck.h"
#include <iostream>

using namespace std;

void BabyDuck::talk()
{
    cout << "Baby Duck Quack!!!!" << endl;

}
void BabyDuck::adultTalk()
{
    Duck::talk();

}
