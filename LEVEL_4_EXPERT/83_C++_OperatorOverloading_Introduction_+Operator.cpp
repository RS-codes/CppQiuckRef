//83. C++ Operator Overloading Introduction  ‘+Operator’ :

#include<iostream>
using namespace std;

class Mk{
public:
    int intmk;
    int extmk;

    Mk(){ //default constructor
    intmk=0;
    extmk=0;}

    Mk(int im,int em){
    intmk=im;
    extmk=em;}

    void disp(){
    cout<<intmk<<endl<<extmk<<endl;}

    /*operator overloading function*/
    Mk operator + (Mk m){  /*here only one parameter is passed, current object parameter is passed implicitly*/
    Mk temp;
    temp.intmk=intmk+m.intmk;   /*here only one parameter is passed, current object parameter is passed implicitly, i.e., m.intmk is passed and current obj intmk is passed automatically*/
    temp.extmk=extmk+m.extmk;
    return temp;
    }
};

 int main()
 {
    Mk m1(10,20),m2(40,70);
    Mk m3=m1+m2;
    m3.disp();
    return 0;
 }



/*
NOTE: operator overloading ftn can  do any custom operation and return any type, based on d requirement of the pgm
syntax: return_type  operator + (parameter )   
*/


