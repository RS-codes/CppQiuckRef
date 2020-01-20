//60. C++ Static Variables _ Static Members in Class _Object Oriented Programming :  


/*
static variable-available throughout the ftn calls,stored in (DATA MEM)heap,only one copy is shared by all,if we change the value in one ftn,it will reflect in all the upcoming ftns
*/

#include<iostream>
using namespace std;

void disp();


int main()
{
    disp();
    disp();
    disp();
    disp();
    return 0;
}


void disp(){
    static int counter=0;    //only for the 1st time executed
    cout<<++counter<<" times called"<<endl;     /*next time onwards the value
								 in (DATA MEM)heap is acessed*/
}

