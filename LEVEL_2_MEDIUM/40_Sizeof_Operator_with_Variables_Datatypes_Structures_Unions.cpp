//#40. C++ Sizeof Operator with Variables, Data types, Structures, Unions:
#include<iostream>
using namespace std;
/*sizeof is compiler operator*/

struct student{
	int roll_no;
	char gender;
};//see also:compiler optimization

int main()
{
	char sex='M';
	cout<<"int -->"<<sizeof(int)<<endl;//data_type
	cout<<"short int -->"<<sizeof(short int)<<endl;//data_type
	cout<<"variable -->"<<sizeof(sex)<<endl;//variable
	cout<<"structure -->"<<sizeof(student)<<endl;//structure

	return 0;
}
