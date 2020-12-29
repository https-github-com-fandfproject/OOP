## Question 

### Write a program that generates the following output :

* 10
* 20
* 19

### Use an integer contant for the 10, an arithmetic assignment operator to generate the 20, and a decrement operator to generate the 19.

#### Programming

```C++
#include <iostream>

using namespace std;

int main()
{
    const int num = 10 ;
    int num2;
    
    cout<<num<<"\n";
    
    num2 = num + num ;
    
    cout<<num2<<"\n";
    cout<<--num2<<"\n";
    
    
    return 0;
}

```
