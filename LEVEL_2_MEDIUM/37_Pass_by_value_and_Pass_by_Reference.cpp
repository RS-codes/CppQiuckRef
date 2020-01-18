//#37. Passing Structure to Functions by Value, Reference :
/*PASS BY VALUE & PASS BY REFERENCE*/
#include<iostream>
using namespace std;

struct student{
	int rollno;
	char sex;
};

void display(student );//ftn prototype MUST BE done after structure definition
void show(student *);

int main()
{
	student AuthorRS;
	AuthorRS.rollno=111;
	AuthorRS.sex='M';
	display(AuthorRS);//struc variable is passed->passing struc 2 ftn by value
	show(&AuthorRS);//address of the struct.var is passed-> passing struc 2 ftn by ref
	return 0;
}

/*pass by value- pass struc variable to a ftn*/
/*NOTE:changes DOES NOT affect d main ftn*/
void display(student s){
	cout<<"pass by value"<<endl;
	cout<<s.rollno<<endl<<s.sex<<endl;
}

/*pass by reference-pass struc var ADDRESS to a ftn*/
/*NOTE:changes affect d main ftn*/
void show(student *sptr){
	cout<<"pass by ref"<<endl;
	cout<<sptr->rollno<<endl<<sptr->sex<<endl;
}
