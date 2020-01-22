//88. Copy Constructor with Example :


/*copy constructor is nothing but a overloaded constructor,
it is called when we copy an obj to another Or
when an obj passed as an arg to an ftn Or
when we return an obj from a ftn.
Usually same memory will be shared between the objs,
so change in one oj get reflected in other,
to avoid this use copy constructor and get separate mem
*/

#include<iostream>
#include<string>
using namespace std;

class Device{
protected:
    string *name;
    int *id;
public:
    Device(string iname,int iid){
        name=new string (iname);
        id=new int(iid);
    }

    //copy constructor
    Device (const Device &d){  /*pass object by ref and const: value of passed object not changed*/
        cout<<"copy constructor called"<<endl;
        name=new string (*d.name); //value at d.name
        id=new int (*d.id);  //value at d.id, since they are pointers

    }

void disp(){
    cout<<*name<<" "<<*id<<endl;  //remember value at
}

void changeVal(string newname,int newid){
    *name=newname;  //remember value at
    *id=newid;
}

};

int main()
{
    Device d("awd",123);
    Device e=d; //copy constructor called now
    d.disp();
    e.disp();

    d.changeVal("new",786);
    d.disp();
    e.disp();

    return 0;
}




