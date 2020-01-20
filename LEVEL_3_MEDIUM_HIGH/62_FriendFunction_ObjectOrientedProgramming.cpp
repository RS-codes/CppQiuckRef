//62. Friend Function _Object Oriented Programming :  

#include<iostream>
using namespace std;

class Atm{
private:
    int pin;
public:
    Atm(int ipin){
    pin=ipin;}

    friend void dispPin(Atm obj);/*declare friend ftn,ATTENTION: object of d class shud be passed as parameter!!!*/
    /*syntax: friend returntype ftnname(classname object)*/
};

void dispPin(Atm obj){ /*friend ftn can access all members of d class,including PRIVATE&PROTECTED members*/
cout<<obj.pin<<endl;}  /*access d member thru d object- obj.pin*/

int main()
{
    Atm sbi(1234);
    dispPin(sbi);//obj of d class is passed as parameter
    return 0;
}
/*NOTE: friend ftn can access all members of a class,to which it is friend.
 FRIEND CLASS can also be achieved by making a class friend to another class 
syntax: friend class FrndClassName(MainClassName object)  */


