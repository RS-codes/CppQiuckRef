//#15. Do While Loop with Example :
#include<iostream>
using namespace std;

int main()
{
	char input;
	do{
	cout<<"menu"<<endl;
	cout<<"Enter x to exit or any other key to see menu again: ";
	cin>>input;
	}while(input != 'x');

	return 0;
}
