//76.a Calling Methods Using Base Class Type :

/*Calling Methods Using Base Class Type*/

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

void intro(Base ob){/*method takes BASE CLASS OBJECT as a parameter*/
    ob.disp();
}

int main()
{
    Derived d;
    d.disp();
    intro(d);/*passed derived class method,but calls base class method*/ 
    return 0;
}


