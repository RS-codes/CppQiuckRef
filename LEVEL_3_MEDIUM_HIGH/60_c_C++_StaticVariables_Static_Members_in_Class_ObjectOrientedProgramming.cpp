//60.c C++ Static Variables _ Static Members in Class _Object Oriented Programming : 

//static class member:

#include<iostream>
using namespace std;

/*static member var-has class scope,shared by all d objects of d class*/
class Device{
public:
    static int counter;/*ATTENTION:shud be initialised outside d class*/

    Device(){  //constructor
        counter++;/*everytime obj is created, this will get incremented*/
    }

    void disp(){
    cout<<counter<<" devices found"<<endl;}
};

int Device::counter=0;//initialise outside d class

int main()
{
    Device d;
    Device e;
    Device f;
    d.disp();/*since same copy is shared by all objects,prints total count*/
    return 0;
}




