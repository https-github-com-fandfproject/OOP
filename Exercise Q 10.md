## Question :

### In the heyday of the British empire, Great Britain used a monetary system based on pounds, shiings, and pence. There were 20 shillings to a pound, and 12 pence to a shilling. The notation for this old system used the pound sign, £, and two decimal points, so that, for example, £5.28 meant 5 pound, 2 shillings, and 8 pence. (pence is the plural of penny.) The new monetary system, introduced in the 1950s, consists of only pounds and pence, with 100 pence to a pound (like U.S. dollars and cents). We’ll call this new system decimal pounds. Thus £5.28 in the old notation is £5.13 in decimal pounds (actually £5.1333333). write a program to convert the old pounds-shillings-pence format to decimal pounds. An example of the user’s interaction with the program would be 

    Enter pounds : 7
    Enter shillings : 17
    Enter pence : 9

### In most compilers you can use the decimal number 156 (hex character constant ‘\x9c’) to represent the pound sign (£). In some compilers, you can put the pound sign into your program directly by pasting it form the windows Character Map acceccory.


#### Program :

```C++
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int pound, shilling, pence;
    float penceF;
    cout<<"Enter Pound: ";
    cin>>pound;
    cout<<"Enter Shilling: ";
    cin>>shilling;
    cout<<"Enter Pence: ";
    cin>>pence;
    cout<<endl;
    
    //Pounds = Pounds + (Shillings/20) + (Pence/20/12);
    penceF = (float)((shilling*12)+pence)/240;
    pence=penceF*100;
    
    if (pence >= 100){
        pound = pound + (pence/100);
        pence = pence%100;
    }
    
    cout<<"Decimal Pounds:\x9c"<<pound<<"."<<pence;
  
    return 0;
}
```
