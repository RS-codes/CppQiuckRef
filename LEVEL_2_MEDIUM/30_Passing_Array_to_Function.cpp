//#30. Passing an Array to a Function in C++:
#include<iostream>
using namespace std;

void show(int[],int);//ftn prototype

int main()
{
	int arr[]={22,33,44,55,66};
	int l=5;
	show(arr,l);//call d ftn by passing an array to d ftn 
	return 0;
}


void show(int num[], int len){//array arr[] is passed 2 d ftn

	int i;
	for(i=0;i<len;i++)
		cout<<num[i]<<endl;

}
