//70. Order of Execution of Constructors and Destructors in Inheritance :

#include<iostream>
using namespace std;

class Base{
public:
    Base(){
    cout<<"1st-->base class constructor called"<<endl;
    }
    ~Base(){
    cout<<"4th-->base class destructor called"<<endl;
    }
};

class Derived:public Base{
public:
    Derived(){
    cout<<"2nd-->Derived class constructor called"<<endl;
    }
    ~Derived(){
    cout<<"3rd-->Derived class destructor called"<<endl;
    }
};

int main()
{
    Derived ob;/*derived class object created*/
    return 0;
}


