#ifndef CAR_H
#define CAR_H


class Car
{
    public:
        Car();
        void setNumOfHeadlights(int numIn);
        int getNumOfHeadlights();
        void setHeadlightStatus(bool statusIn);
        bool getHeadlightStatus();

    private:
        int numOfHeadlights;
        bool headlightStatus;
};

#endif // CAR_H
