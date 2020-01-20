//58. Destructors in a Class _ C++ Object Oriented Programming :   

#include<iostream>
using namespace std;

class Device{
public:
    Device(){   //constructor
    cout<<"constructor called"<<endl;
    }
    ~Device(){    //Destructor
    cout<<"destructor called"<<endl;
    }
};

int main(){
    Device *d=new Device;    //constructor called

    delete d;    //destructor called
    return 0;
}


/*

Note: Destructor is called when object goes out of scope or delete keyword is called for the object created by using new keyword.Destructor cant take any parameter,as constructor.Destructor should be public and can be defined outside d class using scope resolution operator,same as constructor

*/


