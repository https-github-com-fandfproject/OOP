
## Question :

### Write a program that display your favourite poem. Use an appropriate escape sequence for the line breaks. If you don't have a favorite poem, you can borrow this one by Ogden Nash:
       Candy is Dandy,
       But liquor is Quicker.


#### Program :

```C++
#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    string st;
    cout<<"Enter your favorite poem : ";
    getline(cin,st);

    for(int i=0;i<st.length();i++){
        if(int(st[i]) >= 33 && int(st[i])  <= 47 || int(st[i])  >=58 && int(st[i])  <= 64 || int(st[i]) >=123 && int(st[i]) <=126){
            cout<<st[i];
			cout<<endl;
        }else{
        	cout<<st[i];
		}
        
    }
    return 0;
}

```
