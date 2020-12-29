## Question :

### On a certain day the Birtish pound was equivalent to $1.487 U.S, the French franc was $0.172, the German deutschemark was $0.584, and the Japanese Yen was $0.00955. Write a program tahat allowa the user to enter an amount in dollars, and then displays this value converted to these four other montary units.

#### Program :

```C++
#include <iostream>

using namespace std;

int main()
{
	float pound,USD,franc,deutschemark,yen;
	
	pound = 1.487;
	franc = 0.172;
	deutschemark = 0.584;
	yen = 0.00955;
	
	cout<<"\n\t******** Today USD rate is **********";
	cout<<"\n\t*                                   *";
	cout<<"\n\t* British Pound       = $1.487  USD *";
	cout<<"\n\t* French Franc        = $0.172  USD *";
	cout<<"\n\t* German Deutschemark = $0.584  USD *";
	cout<<"\n\t* Japanese yen        = $0.0095 USD *";
	cout<<"\n\t*                                   *";
	cout<<"\n\t*************************************";
	cout<<endl;
	
	cout<<"\nEnter an amount in Dollars : ";
	cin>>USD;
	
	float Pound = pound * USD ;
	float Franc = franc * USD ;
	float Deutschemark = deutschemark * USD;
	float Yen = yen * USD;
	
	cout<<"$"<<USD<<" = "<<Pound<<" British Pound"<<endl;
	cout<<"$"<<USD<<" = "<<Franc<<" French Pound"<<endl;
	cout<<"$"<<USD<<" = "<<Deutschemark<<" German Deutschemark"<<endl;
	cout<<"$"<<USD<<" = "<<Yen<<" Japacese yen"<<endl;
	
	return 0;
}
```
