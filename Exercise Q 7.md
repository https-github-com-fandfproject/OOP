## Question :

### You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying by 9/5 and adding 32. Write a program that allows the user to enter a floating-point number representing degrees Clsius, and then display the corresponding degrees Fahrenhit.

#### Program :

```C++
#include <iostream>

using namespace std;

int main()
{
	float Celsius,Fahrenheit;
	
	cout<<"Enter the Temperature in Celsius degrees : ";
	cin>>Celsius;
	cout<<endl;
	
	Fahrenheit = Celsius * 9/(float)5 + 32 ;
	
	cout<<Celsius<<" Celsius degrees are equal "<<Fahrenheit<<" Fahrenheit degrees"<<endl;
	
	return 0;
}
```
