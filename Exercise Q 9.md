## Question :

### If you have two fractions, a/b and c/d, their sum can be obtained from the formula 

     a / b        c / d        a*d + b*c / b*d

### For example, 1/4 plus 2/3 is 

    1 / 4  +   2 / 3  =  1*3+4*2 / 4*3  =   3+8 / 12  =   11 / 12


### write a program that encourages the user to enter two fraction, and then displays their sum in fractional form. (You don't need to reduce it to lowest terms.) The interaction with the user might look like this :
   
   Enter first fraction : 1/2
   Enter second fracttion : 2/5
   sum = 9/10
   
### you can take advantage of the fact that the extraction operator (>>) can be chained to read in more than one quantity at once :

   cin >> a >> dummychar >> b;
   
#### Program :

```C++
#include <iostream>
	
	using namespace std;
	
	int main()
	{
		int a,b,c,d;
		char dummychar;
		
		cout<<"Enter first fraction : ";
		cin>>a>>dummychar>>b;
		cout<<"Enter second fraction : ";
		cin>>c>>dummychar>>d;
	
		int e,f;
		
		e = a*d + b*c;
		f = b*d;
		 
		cout<<"sum = "<<e<<dummychar<<f<<endl;
		
		return 0;
	}
```
