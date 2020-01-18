//#39_b. Accessing C++ Nested Structure Members using Arrow Operator:
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
	address *addr;//addr is a POINTER
};

int main()
{
	student AuthorRS;//structure variable
	student *AuthorRSptr;//structure pointer
	AuthorRSptr=&AuthorRS;//ptr pointing to variable

	/*assigning value to variables*/
	AuthorRSptr->name="AuthorRS";
	AuthorRSptr->roll_no=123;
	
	/*ATTENTION PLS*/
	address assign_addr={18,"DummyPlace"};//to assign value to d pointer addr
	AuthorRSptr->addr=&assign_addr;//!!! LOOK CLOSER !!!

	/*accessing d variables*/
	cout<<AuthorRSptr->name<<endl;
	cout<<AuthorRSptr->roll_no<<endl;
	cout<<AuthorRSptr->addr->house_no<<endl;//LOOK CLOSER
	cout<<AuthorRSptr->addr->street<<endl;

	return 0;
}

