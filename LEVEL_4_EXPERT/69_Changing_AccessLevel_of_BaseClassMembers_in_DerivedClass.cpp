//69. Changing Access Level of Base Class Members in Derived Class :

/*USING ACCESS DECLARATION*/
#include<iostream>
using namespace std;

class Base{
protected:
    int id;
public:
    void setid(int iid){
    id=iid;}
};

/*Access declaration changes the ACCESS LEVEL/SCOPE
of base class member in derived class */
/*  syntax:
        accessDeclaration:  say, public/protected/private
            BaseclassName :: memberName  */
class Derived:private Base{
public: //ACCESS DECLARATION
    Base::id; /*now id(PRIVATE member) has bcom PUBLIC,it can be accessed OUTSIDE CLASS */

    void disp(){
    cout<<id<<endl;}
};

int main()
{
    Derived d;
    d.id=123;/*private mem is changed scope as public and used OUTSIDE class */
    d.disp();
    return 0;
}

