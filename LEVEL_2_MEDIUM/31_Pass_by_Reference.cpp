//#31. Pass by Reference in C++ with Example :
#include<iostream>
using namespace std;

void display(int *);//ftn prototype


int main()
{
	int weight=50;
	cout<<"value b4 chnged by ptr in pass_by_ref -->"<<weight<<endl;
	display(&weight);
	cout<<endl<<"value afte' chnged by ptr in pass_by_ref -->"<<weight<<endl;
	return 0;
}

void display(int *ptr){

	cout<<endl<<"pass by reference -->"<<*ptr<<endl;
	/*pass by ref= passing a pointer 2 a ftn
	NOTE:value changed using d ptr'll affect d actual value*/
	*ptr=100;
}
