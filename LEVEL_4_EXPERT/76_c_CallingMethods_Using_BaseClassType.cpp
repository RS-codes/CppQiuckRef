//76.c Calling Methods Using Base Class Type :

//pass by REFERENCE

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

void intro(Base &ob){/*PASS BY REFERENCE*/
    ob.disp();/*USE DOT OPERATOR, since accesing thru' OBJECT*/
}

int main()
{
    Derived d;
    d.disp();
    intro(d);/*OBJECT is passed*/
    return 0;
}




