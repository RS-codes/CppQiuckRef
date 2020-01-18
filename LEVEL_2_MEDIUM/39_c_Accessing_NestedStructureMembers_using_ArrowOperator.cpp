//#39_c. Accessing C++ Nested Structure Members using Arrow Operator:
#include<iostream>
#include<string>
using namespace std;

struct address{
	int house_no;
	string street;
};

struct student{
	string name;
	int roll_no;

	address *addr;//pointer
	
};

int main()
{
	student rs;//variable
	
	address assign_ad={18,"DummyPlace"};//to assign value to d pointer addr
	rs.addr=&assign_ad;//ptr points 2 d variable

	cout<<rs.addr->house_no<<endl;
	cout<<rs.addr->street<<endl;
	return 0;
}
