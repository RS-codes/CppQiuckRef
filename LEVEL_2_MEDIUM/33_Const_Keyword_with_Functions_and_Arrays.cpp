//#33. Const Keyword with Functions and Arrays in C++ with Example:
#include<iostream>
using namespace std;
/*const--> keep pgming elements constant i.e.,Variables,Pointers, array,ftn arguments,return values,class data members,member ftns,objects +protect array elements */
void display(const int[],int);

int main()
{
	const float pi=3.14;//constant variable, cant be changed
//NOTE:const variable shud be initialized while declaring..!!!
	cout<<"pi-->"<<pi<<endl;
	//pi=2.1; //ERROR,u cant assign 2 a variable dat is const

	int number[]={22,33,44,55,66};
	display(number,5);
return 0;
}

/*protect array elements*/
void display(const int arr[],int len){
	int counter;
	cout<<"array elements:"<<endl;
	for(counter=0;counter<len;counter++){
	cout<<arr[counter]<<endl;
	}
	//arr[counter]=99;//ERROR,u cant assign 2 a variable dat is const
}
