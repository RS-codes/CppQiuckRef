//67. Protected Inheritance in C++ _ Object Oriented Programming :  

#include<iostream>
using namespace std;

/*protected inheritance*/

class Base{
private:
/*CANT be inherited*/
    int restricted;

protected:
/*can be inherited,available as protected member in derived class*/
    int id;

public:
/*can be inherited,available as PROTECTED member in derived class(THOUGH ITS PUBLIC MEMBER IN BASE CLASS)*/
void setid(int iid){
    id=iid;};
};

class Derived:protected Base{/*protected inheritance*/
public:
    void via(int x){
    setid(x);}
    void disp(){
    cout<<id<<endl; //id- is inherited as protected member by derived class*/
    }
};

int main()
{
    Derived d;
    //d.setid(123);/*ERROR: trying to access protected member,outside class */
/*SINCE public member setid() of base class has become PROTECTED member of derived class, it CANT be accessed OUTSIDE class */
    d.via(786);
    d.disp();
    return 0;
}


/*

NOTE: In protected inheritance, BOTH public & protected member of BASE class acts as PROTECTED member of DERIVED class.

*/



