//#32. Relationship between Arrays and Pointers in C++ with Example:
#include<iostream>
using namespace std;

int main()
{
	int arr[]={22,33,44,55,66};
	cout<<arr[0]<<endl;//prints 1st element
	cout<<*arr<<endl;//prints 1st element

	cout<<arr[2]<<endl;//prints 3rd element
	cout<<*(arr+2)<<endl;//prints 3rd element
	//NOTE:array element can be accessed thru' ARRAY INDEX or *VALUE @

	return 0;
}
