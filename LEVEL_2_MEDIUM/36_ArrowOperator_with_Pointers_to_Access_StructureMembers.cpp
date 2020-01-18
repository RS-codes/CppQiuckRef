//#36.  Arrow Operator with Pointers to Access Structure Members :
#include<iostream>
using namespace std;

struct student{
	int rollno;//struture member
	char sex;
};

int main()
{
	student AuthorRS;//structure variable
	student *AuthorRSptr;//pointer

	AuthorRSptr=&AuthorRS; //ptr pointing 2 d struct var
	AuthorRS.rollno=123;
	AuthorRSptr->sex='m';//->ARROW OPERATOR,to access struct.member thru' POINTER to d struct.var
	
	cout<<AuthorRSptr->rollno<<endl;
	cout<<AuthorRS.sex<<endl;//. DOT OPERATOR, to access struc.member thru' struct.variable
	return 0;
}
