
## Question :

### A library function, islower(), takes a single character (a latter) as an argument and return a nonero integer if the letter is lowercase or Zero if it is uppercase. This function requires the header file CTYPE.H. Write a rogram that allows the user to enter a letter, and then display either Zero or nonZero depending on whether a lowercase or uppercase letter was entered.

#### Program :

```C++
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	char letter;
	int result;
	
	cout<<"Enter A letter : ";
	cin>>letter;
	
	result = islower(letter);
	cout<<result<<endl;
	
	return 0;
}
```
