//#23. C++ Scope _ Local, Global Variable Scopes:
#include<iostream>
using namespace std;
/*scope-wer it is accessible
local scope,global scope,block scope
inside ftn,ftn definition->local scope
outside ftn->global scope
inside a block->block scope
*/
void display();
int x=100;//global ,can be called anywer

int main()
{
	display();
	cout<<"GLOBAL x from main: x= "<<x<<endl;
	{
		int y=20;//block scope, can be called only inside this CODE BLOCK
		cout<<"BLOCK SCOPE: y= "<<y<<endl;
	}
	return 0;
}

void display(){
int a=10,b=20;//local scope,can be called only inside this ftn
cout<<"LOCAL a and b: "<<a<<""<<b<<endl;
cout<<"GLOBAL x from display ftn: x= "<<x<<endl;
}
