## Question

### Write a program that generates the following table:

| 1990 | 135 |
|-|-|
| 1991 | 7290 |
| 1992 | 11300 |
| 1993 | 16200 |

### Use a single Cout Statement for all output.

### Program

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long pop1 =7290 , pop2 =11300 ,pop3 =16200 ;
    
    cout<<setw(8)<<"1990"<<setw(12)<<"135."<<endl
        <<setw(8)<<"1991"<<setw(12)<<"pop1"<<endl
        <<setw(8)<<"1992"<<setw(12)<<"pop2"<<endl
        <<setw(8)<<"1993"<<setw(12)<<"pop3"<<endl;

    return 0;
}

```
