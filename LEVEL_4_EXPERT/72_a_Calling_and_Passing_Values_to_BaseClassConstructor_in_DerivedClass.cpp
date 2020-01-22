//72.a Calling and Passing Values to Base Class Constructor in Derived Class :

#include<iostream>
using namespace std;

class Base{
protected:
    int id;
public:
    Base(int iid){
    id=iid;
    cout<<"base class constructor called"<<endl;}
};

class Derived:public Base{
public:
    Derived(int x):Base(x){/*value passed to base class constructor*/
    cout<<"derived class constructor called"<<endl;}

    void disp(){
    cout<<id<<endl;}
};


int main()
{
    Derived d(123);
    d.disp();
    return 0;
}

