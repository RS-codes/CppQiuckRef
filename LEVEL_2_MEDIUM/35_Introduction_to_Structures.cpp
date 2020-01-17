//#35. Introduction to Structures in C++ :
/*arraysame data_type under one group;structuresdiff. data_type under one group*/
#include<iostream>
using namespace std;

struct student{ //structure name(GLOBAL SCOPE, can be accessed thru’out our pgm)
	int rollno;//structure member,it can be a VARIABLE, another STRUCTURE or UNION
	char sex;//structure member
}bamu,randomGuy;//structure variables(GLOBAL SCOPE)
//NOTE:student is a user-defined data_type..!!!

int main()
{
	student AuthorRS,ajju;//structure variables(LOCAL SCOPE)
	AuthorRS.rollno=123;//assign value 2 structure variable member
	ajju.rollno=456;
	
	bamu.rollno=111;
	randomGuy.rollno=222;

	cout<<bamu.rollno<<endl<<randomGuy.rollno<<endl;
	cout<<AuthorRS.rollno<<endl<<ajju.rollno<<endl;;
	return 0;
}
