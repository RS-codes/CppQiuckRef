//73. C++ Overriding Base Class Methods in Derived Class :

#include<iostream>
using namespace std;

class Base{
public:
    void disp(){
    cout<<"base class method called"<<endl;}
};

class Derived: public Base{
public:
    void disp(){ /*base class method overridden,i.e., same return type, same ftn.name, same parameters*/
    cout<<"derived class method is called"<<endl;
    cout<<"which has overridden base class method"<<endl;}
};

int main(){
    Derived d;
    d.disp();
    return 0;
}



/*
NOTE: base class method is overridden by derived class method, when derived class object calls the method, base class method is hidden and derived class method is executed
*/


