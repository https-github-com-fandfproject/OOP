#include <iostream>
using namespace std;

int main()
{
    int intVar = 1500000000;
    intVar = (intVar * 10)/10;
    cout<<"intVar = "<<intVar<<endl;

    intVar = 1500000000;
    intVar = (static_cast<double>(intVar) * 10) / 10;
    cout<<"intVar = "<<intVar<<endl;

    return 0;
}