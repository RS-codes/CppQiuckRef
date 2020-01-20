//61. C++ Static Methods in Classes _Object Oriented Programming :  

#include<iostream>
using namespace std;

class Device{
public:
    static int counter;

    Device(){
        ++counter;
    }

    static void dispCount(){         //static method
       cout<<counter<<endl;      //static methods use only static varaibles
    }
};

int Device::counter=0;

int main()
{
    Device d;
    Device e;
    Device f;

    Device::dispCount();      /*use scope resolution operator to access static ftn*/
    return 0;
}


