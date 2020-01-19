//#45_c. Automatic Type Deduction C++11 Feature:
//Error if not initialised-Demo
#include<iostream>
using namespace std;
int main()
{
/*note:initialise immediatly MUST!!!*/
auto qty;//ERROR
qty=10;//ERROR shud be iniatised, wer its declared
cout<<qty;
return 0;
}
