//#34. Array Ranges in Functions with Example in C++:
#include<iostream>
using namespace std;

void display(const int *,const int *);

int main()
{
	int arr[]={11,22,33,44,55,66,77,88,99};
	display(arr+3,arr+7);//calls array element 4m range (4-7)
	return 0;
}

void display(const int *start,const int *end){

	const int *ptr;
	for(ptr=start;ptr!=end;ptr++){
	cout<<*ptr<<endl;
	}

}
