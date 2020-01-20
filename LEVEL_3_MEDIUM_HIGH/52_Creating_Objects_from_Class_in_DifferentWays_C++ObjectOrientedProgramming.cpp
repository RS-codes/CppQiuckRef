//52. Creating Objects from a Class in Different Ways _ C++ Object Oriented Programming : 

#include <iostream>
#include <string>
using namespace std;

class Device{
public:
string name;

void detect(){
cout<<name<<" deviced detected"<<endl;
}
};

int main()
{
    Device bt; //object stored in STACK
    bt.name="bluetooth";//use DOT OPERATOR to access object
    bt.detect();

    Device *wf=new Device();//object stored in HEAP,since dyn mem alloc
    wf->name="Wifi"; //use ARROW OPERATOR to access object , since its pointer
    wf->detect();

    return 0;
}

