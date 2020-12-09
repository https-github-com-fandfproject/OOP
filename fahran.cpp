#include <iostream>
using namespace std;

int main()
{
    int ftemp;          //for temperature in fahrenheit

    cout<<"Enter temperature in fahrenheit : ";
    cin>>ftemp;
    int ctemp = (ftemp-32) * 5 / 9;             //180*0.555=100.00001
    cout<<"Equivalent in Celsius is : "<<ctemp<<'\n';

    return 0;
}