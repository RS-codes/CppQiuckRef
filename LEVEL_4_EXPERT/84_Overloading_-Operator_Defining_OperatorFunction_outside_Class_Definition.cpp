//84. Overloading  ‘- Operator’  Defining Operator Function outside Class definition :

#include<iostream>
using namespace std;

class Mark{
public:
    int intmk;
    int extmk;

    Mark(){//default constructor
    intmk=0;
    extmk=0;}

    Mark(int im,int em){ //user defined constructor
    intmk=im;
    extmk=em;}

    void disp(){
    cout<<intmk<<endl<<extmk<<endl;}

    Mark operator-(Mark m); //DECLARATION
};


Mark Mark:: operator-(Mark m)//Defined outside class
{
    Mark temp;
    temp.intmk=intmk-m.intmk; /*first obj passed automatically,since its a member of class*/
    temp.extmk=extmk-m.extmk;
    return temp;
}

int main()
{
    Mark m1(10,20),m2(40,60);
    Mark m3=m2-m1; /*two operands, 1-passed automatically,2-passed manually*/
    m3.disp();
    return 0;
}


/*NOTE: here,   Mark Mark:: operator-(Mark m)  
Mark->return type, Mark::  ->Class to whch it belongs  (scope resolution),since the ftn is defined outside class, Mark m --> passing object as parameter[here we pass only one parameter, since the ftn is a member of the class ]  
i.e., current object or the object which calls the operator ftn is passed implicitly */


