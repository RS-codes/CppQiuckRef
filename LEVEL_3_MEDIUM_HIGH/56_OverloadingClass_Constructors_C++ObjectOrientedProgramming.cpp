//56. Overloading Class Constructors _ C++ Object Oriented Programming :

#include<iostream>
#include<string>
using namespace std;

class Device{
private:
    string name;
    int id;
public:
    Device(){  //default constructor ( with no parameter)
    name="noname";
    id=0;
    cout<<"default constructor called"<<endl;}

    Device(string iname,int iid){  /*overloaded constructor (
 with iname and iid as parameters)*/
    name=iname;
    id=iid;
    cout<<"overloaded constructor called"<<endl;}

    void disp(){
    cout<<name<<"  "<<id<<endl;
    }
};

int main()
{
    Device d;//object created, default constructor called
    d.disp();

    Device e("NOKIA",1100);//object created, overloaded constructor called
    e.disp();
    return 0;
}


/*

Note: if default constr is not mentioned manually and only overloaded constructors wid parameters are given manually, then compiler gives ERROR,since default constructor will not be added automatically ,if we overload constructor

*/


