//#46_a. For Each Loop _ Range Based For Loop C++ 11 feature :
#include<iostream>
using namespace std;
int main()
{
int marks[]={77,88,99,55,66};
for(int ele:marks)//syntax: for(variable:collection) /*but throws ERROR bcoz C++ 11 feature !!!*/
{cout<<ele<<endl;}
return 0;
}     
