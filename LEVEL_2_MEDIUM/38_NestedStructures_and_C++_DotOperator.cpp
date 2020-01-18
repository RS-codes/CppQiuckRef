//#38. Nested Structures and C++ Dot Operator :
#include<iostream>
#include<string>//header 2 use strings
using namespace std;

struct address{
	int house_no;//members
	string street_name;
};

struct student{
	string name;//members
	int roll_no;
	address addr;//user-defined data_type 'address' variable ->'addr'
};

int main()
{
	student AuthorRS;//struct variable
	/*assigning value 2 d struc variables*/
	AuthorRS.name="AuthorRS";
	AuthorRS.roll_no=123;
	AuthorRS.addr.house_no=18;//LOOK CLOSER :-)
	AuthorRS.addr.street_name="DummyPlace";

	/*accessing values stored in d struc variable*/
	cout<<AuthorRS.name<<endl;
	cout<<AuthorRS.roll_no<<endl;
	cout<<AuthorRS.addr.house_no<<endl;//LOOK CLOSER
	cout<<AuthorRS.addr.street_name<<endl;
	
	return 0;
}
