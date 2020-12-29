## Question :
### Assuming there are 7.481 gallons in a cubic foot write a program that asks the user to enter a number of gallons and then displays the equivalent in cubic feet.

Program :

```C++
#include <iostream>

using namespace std;

int main()
{
    float gallons,cubic_foot;

    cout<<"Enter the number of gallons : ";
    cin>>gallons;

    float Gallons = 1 / (float) 7.481;
    float Cubic_foot = Gallons * gallons;

    cout<<gallons<<" gallons have "<<Cubic_foot<<" cubic feet";

    return 0;
}
```
