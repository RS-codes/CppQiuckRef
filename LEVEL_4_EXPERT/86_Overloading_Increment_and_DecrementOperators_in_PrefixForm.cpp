//86. Overloading Increment and Decrement Operators in Prefix form :

#include<iostream>
using namespace std;

class Mark{
public:
    int mk;

    Mark(){
    mk=0;}

    Mark(int im){
    mk=im;}

    void disp(){
    cout<<mk<<endl;}

    void operator++() {/*no parameter passed,since its an UNARY OPERATOR*/
        mk+=3;
    }

    friend void operator--(Mark &); /*friend ftn doesnt belong to class, so pass current object*/
};

void operator--(Mark &curobj){ /*friend ftn definition, outside class*/
    curobj.mk-=5;
}


int main()
{
    Mark m1(100);
   // m1++;
    ++m1;
    m1.disp();

    --m1;
    m1.disp();
    return 0;
}

