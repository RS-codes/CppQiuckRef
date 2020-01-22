//75.a C++ this Keyword _ Pointer :

//prints GARBAGE VALUE

#include<iostream>
using namespace std;

class Device{
public:
    int id;

    void setid(int id){
    id=id;/*puts garbage value,since local variable id is same as member variable id*/
    }

    void disp(){
    cout<<id<<endl;}
};

int main()
{
    Device d;
    d.setid(123);
    d.disp();//prints GARBAGE VALUE
    return 0;
}

