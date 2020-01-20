//63. Inheritance, Polymorphism _ Introduction :  

#include<iostream>
#include<string>
using namespace std;

class Base{
private:
/*!!!CANT be inherited*/

protected:
/*can be inherited*/

public:
/*can be inherited*/
    string name;
    void setname(string iname){
    name=iname;}
};

class Derived:public Base{ //inheritance
public:
    int id;
    void setid(int iid){
    id=iid;}

    void disp(){
    cout<<name<<" "<<id<<endl;} /* derived class inherited base class property name*/
};

int main()
{
    Derived d;//derived class object
    d.setname("rs");
    d.setid(123);
    d.disp();
    return 0;
}



/*

NOTE:  inheritance gives us code reusability,since baseclass member & mem.ftns r inherited by derived class.we need not to create those members again 

*/


