#include<iostream>       //preprocessor directive
using namespace std;      //"using" directiove

int main()                //function name "main"
{                         //start function body
     int num1,num2,sum;   //statement
     cout<<"Enter 1st Number : ";
     cin>>num1;
     cout<<"Enter 2nd number : ";
     cin>>num2;

     sum=num1+num2;

     cout<<"sum of "<<num1<<" and "<<num2<<" = " <<sum<<endl; //statement

    return 0;     
}                            //end function body