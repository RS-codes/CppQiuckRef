//#44.  Avoiding Dangling Pointer Reference in C++:
#include<iostream>
using namespace std;

int main()
{
int *pointer=nullptr; //c++11 feature(nullptr)
pointer=new int; //dyn mem alloc

if(pointer!=nullptr){
*pointer=10;
cout<<*pointer<<endl;
delete pointer;//deallocates mem
pointer=nullptr;//avoid dangling pointer
}else{
cout<<"memory not allocated"<<endl;
}
return 0;
}
