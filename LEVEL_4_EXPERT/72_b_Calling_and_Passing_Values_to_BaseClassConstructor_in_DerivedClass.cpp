//72_b_Calling_and_Passing_Values_to_BaseClassConstructor_in_DerivedClass

#include<iostream>
using namespace std;

class Base{
protected:
    int id;
public:
    Base(){
    cout<<"base class constructor called "<<endl;}
};

class Derived :public Base{
public:
    Derived(int x):Base(){ /*base class constructor can be called*/
    id=x;/*and value can be passed*/
    cout<<"derived class constructor called"<<endl;}
    void disp(){
    cout<<id<<endl;
    }
};

int main()
{
    Derived d(111);
    d.disp();
    return 0;
}

