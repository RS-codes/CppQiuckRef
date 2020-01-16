//#29. Introduction to C++ Pointers :
#include<iostream>
using namespace std;

int main()
{
	int age=20;
	bool human=true;

	int *ageptr; //syntax: datatype *ptr_name  NOTE:datatype->which type of data is stored in d address
	bool *humanptr;// here humanptr-> points to a variable human which contains a bool value
	
	ageptr=&age;//initializing a pointer by giving the address of variable
	humanptr=&human;//NOTE:no need to put * b4 d ptr_name

	cout<<age<<"-->"<<ageptr<<endl;
	cout<<human<<"-->"<<humanptr<<endl;//gives u d address 

	cout<<age<<"-->"<<*ageptr<<endl;
	cout<<human<<"-->"<<*humanptr<<endl;// gives u d value stored
	return 0; 
}
//NOTE: pointers useful in DYNAMIC MEMORY ALLOCATION
