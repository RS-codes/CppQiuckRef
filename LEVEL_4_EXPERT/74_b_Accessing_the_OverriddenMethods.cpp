//74.b Accessing the overridden Methods :

#include<iostream>
using namespace std;

class Base{
public:
    void disp(){
    cout<<"base class method called"<<endl;}
};

class Derived : public Base{
public:
    void disp(){ /*inside derived class method, we can call base class overridden METHOD*/
    cout<<"derived class method called"<<endl;

    Base::disp();  //calls overridden base class method

    }
};


int main()
{
    Derived d;
    d.disp();
    return 0;
}




