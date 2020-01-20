//54. Private Access Specifier _ C++ Object Oriented Programming :      

#include<iostream>
using namespace std;

class ATM{
private:    //private access specifier
    int pin;    //private member variables cant be accessed outside d class

    void getpin(){  //private member functions cant be accessed outside
    cout<<pin-199<<endl;}

public:
    void setpin(int ipin){          /*private mem var can be accessed 
thru’ a public member ftn of d same class*/
        pin=ipin;}

    void disp(){ 
        getpin();}
};

int main()
{
    ATM sbi;
    sbi.setpin(1234);
    sbi.disp();    //private data is hidden successfully
    return 0;
}


