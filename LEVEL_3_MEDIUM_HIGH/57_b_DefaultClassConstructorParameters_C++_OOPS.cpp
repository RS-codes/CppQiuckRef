//57.b Default Class Constructor Parameters _ C++ OOPS :  

//variation (for the previous concept)


/*

NOTE:  we can put only overloaded constructor and pass default parameters to it, and get our pgm work properly without error ..NO NEED OF DEFAULT CONSTRUCTOR

*/


#include<iostream>
#include<string>
using namespace std;

class Device{
private:
    string name;
    int id;
public:
    Device(string iname="noname",int iid=0){//default parameters passed
    cout<<"overloaded constructor called"<<endl;
    name=iname;
    id=iid;
    }

    void disp(){
    cout<<name<<"  "<<id<<endl;
    }
};

int main()
{
    Device f;//overloaded constructor called with 2 default parameters
    f.disp();

    return 0;
}

