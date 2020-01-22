//85. Overloading Short Hand Operators _ Operator Function as Friend Function :

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

    friend void operator+=(Mark &curobj,int);/*friend ftn*/
};

void operator+=(Mark &curobj,int bonusmark){
curobj.mk+=bonusmark;}

int main()
{
    Mark m(150);
    m+=10;
    m.disp();
    return 0;
}


/*NOTE: friend ftn doesn’t have THIS POINTER therefore current object will not be passed implicitly, so we have to pass the current object manually.
Syntax: 
{
inside class definition..
friend return_type keywordoperator +(curobj.par1,par2); //ftn DECLARATION
};
outside class definition..
return_type keywordoperator +(curobj.par1,par2) {//ftn DEFINITION
curobj.par1+par2;
}
ATTENTION: we pass 2 parameters manually
*/




