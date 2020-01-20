//60.b C++ Static Variables _ Static Members in Class _Object Oriented Programming : 

//static variable(simpler version)

#include<iostream>
using namespace std;

void disp(){
    int a=10;
    static int b=5;
    a+=5;
    b+=10;
    cout<<a<<" "<<b<<endl;
}

int main()
{
    disp();  //15 15
    disp();  //15 25
    disp();  //15  35
    disp();  //15  45
    disp();  //15 55

    return 0;
}


