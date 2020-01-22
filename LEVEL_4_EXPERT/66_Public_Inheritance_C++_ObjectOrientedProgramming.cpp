//66. Public Inheritance in C++ _ Object Oriented Programming   

#include<iostream>
using namespace std;

/*public inheritance*/

class Base{
private:
/*CANT be inherited*/
    int restricted;

protected:
/*can be inherited,available as protected member in derived class*/
    int id;

public:
/*can be inherited,available as public member in derived class*/
void setid(int iid){
    id=iid;};
};

class Derived:public Base{/*public inheritance*/
public:
    void disp(){
    cout<<id<<endl; //id- is inherited as protected member by derived class*/
    }
};

int main()
{
    Derived d;
    //d.id=786;/*ERROR: trying to access protected member,outside class */
    d.setid(123);
    d.disp();
    return 0;
}

/*NOTE: class Derived:public Base{} <- public inheritance ,access specifier affects behaviour of base class members in derived class.
In public inheritance, public & protected member of BASE class acts as public & protected member of DERIVED class respectively*/
