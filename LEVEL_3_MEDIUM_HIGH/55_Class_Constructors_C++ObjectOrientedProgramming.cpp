//55. Class Constructors _ C++ Object Oriented Programming :      

#include<iostream>
#include<string>
using namespace std;

class Device{
private:
    string name;
    int id;
public: //constructor MUST be public..!!!!
/*Constructor syntax: className( ){ .... }
NOTE: strictly no return type,but it may take parameters*/
    Device(){  //constructor iniatialises properties
    name="noname";
    id=0;
    cout<<"constructor is called automatically, when object created"<<endl;
    }
};

int main()
{
    Device d;//object created, compiler calls CONSTRUCTOR automatically
    return 0;
}


/*

NOTE: in previous pgms we’ve not mentioned constructor, but pgm worked fine..its ‘coz compiler automatically constructs it,when object is created.If we need some statement executed inside it,then only we mention it manually,...but cant be called manually..!!!
i.e., In short Constructor is a special function called automatically by compiler when we create obj of class, it has same name of class, no ret type, we cant call them manually,..constructors r normally used to inialise d properties of class and it shud be public

*/
