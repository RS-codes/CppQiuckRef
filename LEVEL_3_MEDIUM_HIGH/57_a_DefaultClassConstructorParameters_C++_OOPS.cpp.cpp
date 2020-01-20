//57. Default Class Constructor Parameters _ C++ OOPS :  

#include<iostream>
#include<string>
using namespace std;

class Device{
private:
    string name;
    int id;
public:
    Device(){
    name="noname";
    id=0;
    cout<<"default constructor called"<<endl;}

    Device(string iname,int iid=6600){//default parameter-6600,can be overwritten
    name=iname;
    id=iid;
    cout<<"overloaded constructor called"<<endl;}

    void disp(){
    cout<<name<<"  "<<id<<endl;
    }
};

int main()
{
    Device d;//default constructor called
    d.disp();

    Device e("NOKIA");//overloaded constructor calledwith one parameter
    e.disp();//one default parameter is taken

    Device f("NOKIA",1100);//overloaded constructor called with 2 parameters
    f.disp();//default parameter overwritten by passed value

    return 0;
}



/*

NOTE: default parameter shud be passed from right to left

*/

