//#42. New and Delete Operators in C++ _ Dynamic Memory Allocation:
#include<iostream>
using namespace std;

int main()
{
int *pointer;    //to return d address of mem allocated
/*syntax: ptr=new datatype*/
pointer=new int;
*pointer=123;
cout<<*pointer<<endl;
delete pointer;    //deallocate memory
return 0;
}
