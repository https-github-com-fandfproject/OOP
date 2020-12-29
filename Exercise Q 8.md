## Question :

### When a value is smaller than a field specified eith setw(),the unused locations are,, by default filled in with spaces. The manipulator setfiil () takes a single character as an argument and causes this character to be substituted for spaces in the empty parts of a field. Reewrite the WIDTH program so that the characters onn each line between the location name and the population number are filled in with periods instead of spaces, as in 

    portcity.....2425785
    

#### Program :

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout<<"PortCity"<<setfill('.')<<setw(12)<<"2425786"<<endl;
	
	return 0;
}
```
