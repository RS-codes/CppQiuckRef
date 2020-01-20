//64. C++ Protected Access Modifier in Classes _Object Oriented Programming :  

#include<iostream>
using namespace std;

class Base{
protected: /*same as private ,BUT it can be inherited*/
    int id;
public:
    void setid(int iid){
        id=iid;}
};

class Derived:public Base{
public:
    void disp(){
        cout<<id<<endl;}
};

int main()
{
    Derived d;
    //d.id=786;  /*cant be accessed outside d class, since PROTECTED*/
    d.setid(123);
    d.disp();
    return 0;
}


/*

NOTE: can be inherited,available to same class,derived class..BUT not  outside the class

*/


