//53. Scope Resolution Operator _ Defining Methods outside Class definition :  

#include<iostream>
using namespace std;

class Device{
public:
    int id;//member variable can be initialised inside class, to be clarified
    /*Note: STATIC VARIABLES can be initialised outside class, using SCOPE RESOLUTION OPREATOR*/

    void disp();//shud be declared inside class
};

void Device::disp(){ //METHODS define outside using SCOPE RESOLUTION OPERATOR
cout<<Device::id<<endl;//use scope resolution op to access var outside class
}

int main(){
Device d;
d.id=10;
d.disp();
    return 0;
}

