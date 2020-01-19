//#47. Introduction to Strings in C++:
#include<iostream>
#include<string>
using namespace std;
int main()
{
//string copy
string name="AuthorRS"; //strcpy string copy of c
string lastname="-rs";
cout<<name<<""<<lastname<<endl;

//string concatenate
cout<<name+lastname<<endl;//strcat of c

//string compare
if(name=="AuthorRS")//strcmp of c
cout<<"name matched"<<endl;

return 0;
}
