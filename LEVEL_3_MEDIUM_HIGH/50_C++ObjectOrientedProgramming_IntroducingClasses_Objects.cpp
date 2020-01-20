//50. C++ Object Oriented Programming   _ Introducing Classes, Objects :
#include <iostream>
using namespace std;

class Device{ //class is a userdefined datatype,juz a blueprint
private:   //access specifier
int id;    //attribute or property

public:
void setid(int iid){      //method or function to access d property
    id=iid;
}

void getid(){      //method or function
    cout<<id<<endl;
}
};

int main()
{
    Device d;//object(runtime variable of the class)
    d.setid(123);//accessing the member of class
    d.getid();//Dot operator to access members
    return 0;
}
