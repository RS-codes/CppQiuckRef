//#18.Two Dimensional and Multidimensional Arrays :
#include<iostream>
using namespace std;

int main()
{
	/*int marks[2][6]; //can be initialized like this

	marks[0][2]=10;*/

	int marks[2][6]={
		{11,22,33,44,55,66},
		{1,2,3,4,5,6}
	};
	cout<<marks[0][2]<<endl;
	return 0;
}
