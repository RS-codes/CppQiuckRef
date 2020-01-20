//59. C++ Destructors to Release Resources with example_Object Oriented Programming  : 

#include<iostream>
#include<string>
using namespace std;

class Device{
private:
    string *name;
    int *id;
public:
    Device(string iname,int iid){
        name=new string;//dyn mem alloc
        id=new int;

        *name=iname; //ATTENTION:*name,*Id since values NOT ADDRESS
        *id=iid;
    }
    ~Device(){
    delete name;//dealloc mem
    delete id;
    cout<<"All memories are released"<<endl;}

    void disp(){
    cout<<*name<<"  "<<*id<<endl;}/*ATTENTION:*name,*Id since 
we need values NOT ADDRESS*/
};


int main()
{
    Device *d=new Device("NOKIA",1100);//dyn mem alloc, calls constructor
    d->disp();

    delete d;//dealloc mem, calls destructor
    return 0;
}

