//#45_a. Automatic Type Deduction C++11 Feature:
#include<iostream>
using namespace std;

int main()
{
/*note:initialise immediatly MUST!!!*/
auto qty=10;/*compiler automatically deduce 
the datatype ,by looking @ d initialiser*/
cout<<qty<<endl;
return 0;
}
