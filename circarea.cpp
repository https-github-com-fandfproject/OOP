#include <iostream>
using namespace std;

int main()
{
    float rad;          //float type variable
    const float PI = 3.14159F; //const float type variable

    cout<<"Enter radius of circlr : ";  //prompt
    cin>>rad;                           //get radius

    float area = PI * rad * rad ;       //find area
    cout<<"Area is : "<<area <<endl;    //display answer


    return 0;
}