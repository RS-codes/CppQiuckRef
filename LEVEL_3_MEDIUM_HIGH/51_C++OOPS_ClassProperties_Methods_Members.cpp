//51. C++ OOPS   _ Class Properties, Methods, Members :
#include <iostream>
#include <string>
using namespace std;

class Device{
public:
string name;

void detect(){
cout<<name<<" device detected"<<endl;
}
};

int main()
{
    Device bt;
    bt.name="bluetooth";
    bt.detect();
    
    Device wf;
    wf.name="Wifi";
    wf.detect();
    
    return 0;
}

