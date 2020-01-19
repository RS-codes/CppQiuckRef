//#49. Function Overloading (COMPILE TIME POLYMORPHISM) in C++:
#include<iostream>
#include<string>
using namespace std;

void display();
void display(string);//overloaded ftn
/*same ftn_name,return type BUT diff set of parameters*/
/*NOTE: diff return types doesnt mean ftn overloading!!!*/
int main()
{
display();
display("AuthorRS");
return 0;
}

void display(){
cout<<"hi..."<<endl;
}
void display(string name){
cout<<"hi "<<name<<endl;
}
