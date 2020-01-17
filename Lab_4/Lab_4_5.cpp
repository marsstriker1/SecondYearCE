#include <iostream>

using namespace std;

class Vehicle
{
private:
    int num_vehicle;
    float hour,rate;
public:
    Vehicle()
    {
         num_vehicle = 0;
         hour =  0;
         rate = 0;
    }
    Vehicle(int n=0, float hr=0, float rt=0)
    {
         num_vehicle = n;
         hour =  hr;
         rate = rt;
    }
    void calcSum();
};
void Vehicle::calcSum()
{
    if (Vehicle::num_vehicle<10)
        cout<<"Vehicle no.: "<<Vehicle::num_vehicle<<"\nTotal Parking Cost = Rs. "<< Vehicle::hour*Vehicle::rate<<endl;
    else
        cout<<"Vehicle no.: "<<Vehicle::num_vehicle<<"\nTotal Parking Cost = Rs. "<< 0.9*(Vehicle::hour*Vehicle::rate)<<endl;
}
int main()
{
    Vehicle v1(11,1,1);
    Vehicle v2=v1;
    Vehicle v3(5,5,4),v4(5);
    v1.calcSum();
    v2.calcSum();
    v3.calcSum();
    v4.calcSum();
}
