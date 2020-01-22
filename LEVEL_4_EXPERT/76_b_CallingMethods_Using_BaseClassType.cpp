//76.b Calling Methods Using Base Class Type :

/*Calling Methods Using Base Class Type*/
//using pointer

#include<iostream>
using namespace std;

class Base{
public:
    void disp(){
    cout<<"base class method called "<<endl;}
};

class Derived:public Base{
public:
    void disp(){
    cout<<"derived class method called"<<endl;}
};

void intro(Base *ob){/*method takes BASE CLASS POINTER as a parameter*/
    ob->disp();/*USE ARROW OPERATOR, since accesing thru' pointer*/
}

int main()
{
    Derived d;
    d.disp();
    intro(&d);/*address is passed*/
    return 0;
}


