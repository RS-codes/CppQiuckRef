//75.b C++ this Keyword _ Pointer :

//solution for the above issue (use “this” pointer)

#include<iostream>
using namespace std;

class Device{
public:
    int id;

    void setid(int id){
    this->id=id;/*this pointer points to the member variable, of invoking object*/
    }

    void disp(){
    cout<<id<<endl;}
};

int main()
{
    Device d;
    d.setid(123);
    d.disp();/*prints correct value, since we used THIS POINTER*/
    return 0;
}



/*

NOTE: every object of a class has an pointer pointing to its own memory address called -->THIS POINTER 
this pointer --> is available only for the MEMBER FUNCTIONS,  It may be used to refer the INVOKING OBJECT
NOT available for FRIEND FTN, since they are not member ftn of the class 

*/



