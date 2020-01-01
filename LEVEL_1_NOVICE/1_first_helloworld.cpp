//#1. First C++ Hello World Program :
#include<iostream>//#include->preprocssor directive, iostream(headerFile)->cout,cin..
using namespace std;  //std -> endl is defined here (library ftn

int main()   //execution starts here
						// {....}  ->body of the ftn
{
	cout<<"Hello world."<<endl;	//endl->newline, defined in std namespace

return 0;   //returns 0 to the O.S, whch called the main ftn & 0->successful 

}

/*
*if using DevC++
#include<iostream>
#include<cstdlib>//to use system pause
using namespace std; 

int main()  										
{
	cout<<"Hello world."<<endl;
	system("PAUSE");  //waits
	return 0;   
}

*/