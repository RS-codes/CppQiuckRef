//74.a Accessing the overridden Methods :

#include<iostream>
using namespace std;

class Base{
public:
    void disp(){
    cout<<"base class method called "<<endl;}
};

class Derived: public Base{
public:
    void disp(){ //base class method overridden
    cout<<"derived class method called"<<endl;}
};

int main()
{
    Derived d;
    d.disp();//derived class method called
    d.Base::disp(); //overridden base class method called
    return 0;
}



/*

NOTE:  to access overridden method, use SCOPE RESOLUTION OPERATOR
syntax: DerClassObject.BaseClassName :: methodName()
if accessing thru’ derived class object, use  DOT OPERATOR & SCOPE RESOLUTION OPERATOR  or  BaseclassName :: methodName 

*/


