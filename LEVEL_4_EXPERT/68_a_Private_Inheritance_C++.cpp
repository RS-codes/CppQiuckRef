//68.a Private Inheritance in C++ :

/*generates ERROR,since id(PRIVATE MEMBER),not avilable for any derived class*/

#include<iostream>
using namespace std;

/*PRIVATE INHERITANCE*/

class Base{
private:
/*CANT BE INHERITED*/

protected:/*can be inherited,available as PRIVATE member in derived class*/
    int id;
public:/*can be inherited,available as PRIVATE member in derived class*/
    void setid(int iid){
    id=iid;}
};

class Derived:private Base{/*private inheritance*/
public:
    void disp(){
    cout<<id<<endl;}
    };
/*both protected & public members has become PRIVATE members of DERIVED class,
so its not available for ANY DERIVED CLASS & OUTSIDE CLASS*/

class Der2:public Derived{
public:
    void setnum(int iid){
    setid(iid);/*generates ERROR,since setid(PRIVATE MEMBER)*/
    id=iid;/*generates ERROR,since id(PRIVATE MEMBER),not avilable for any derived class*/
    }
};

int main()
{
    Der2 d;
    d.setnum(123);/*since private members cant access id(private)*/
    d.disp();
    return 0;
}

