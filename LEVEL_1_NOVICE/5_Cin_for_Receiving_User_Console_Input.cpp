//#5. Cin in C++ for Receiving User, Console Input:
#include<iostream>
using namespace std;

int main()
{
	int age;
	float average;

	cout<<"Enter age and average"<<endl;
	/*can read 2 or more values by single cin,irrespective of DATATYPE */
	cin>>age>>average;//cin->obj of istream Class, >>stream EXTRACTION operator
	cout<<"age= "<<age<<endl<<"avg= "<<average<<endl;
	
	return 0;
}
