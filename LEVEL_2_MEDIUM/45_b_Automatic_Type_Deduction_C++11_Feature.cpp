//#45_b. Automatic Type Deduction C++11 Feature:
#include<iostream>
using namespace std;
int sum(){ //ftn can be anything,with or w/o arg
	int i,j,res;
	i=10,j=5;
	res=i+j;
	return res;//ftn can return any datatype
}

int main()
{
/*note:initialise immediatly MUST!!!*/
auto qty=sum();/*compiler automatically deduce 
the datatype ,by looking @ d RETURN TYPE OF THE FUNCTION sum()*/
cout<<qty<<endl;
return 0;
}
