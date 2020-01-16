//#28. Address operator in C++ _ & Operator :
#include<iostream>
using namespace std;

int main()
{
	int age=20,weight=70;
	cout<<"value: "<<age<<endl;
	cout<<"address: "<<&age<<endl;//address of variable age stored in memory

	cout<<"value: "<<weight<<endl;
	cout<<"address: "<<&weight<<endl;//address of variable weight stored in memory
	//NOTE:useful in pointer concepts
	return 0;
}
