//#43. Dynamically Allocating Arrays Depending on User Input in C++:
#include<iostream>
using namespace std;

int main()
{
int *pointer=NULL; //pointer points to null
int input,temp,counter;

cout<<"enter how many elements: ";
cin>>input;

pointer=new int[input];//dyn.mem.alloc

for(counter=0;counter<input;counter++){
cout<<"enter element "<<counter+1<<endl;
cin>>temp;
*(pointer+counter)=temp;
}
cout<<"elements are: "<<endl;
for(counter=0;counter<input;counter++){
cout<<"element "<<counter+1<<"->"<<*(pointer+counter)<<endl;
}

delete []pointer;//dealloc mem
return 0;
}
