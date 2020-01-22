//89.b shallow copy & deep copying-memory leak and dangling reference issues


/*
when we allocate memory, as below
The default copy constructor and overloaded = operator function will copy the pointers and value of N of one object to another object. Which will lead to memory leak and dangling reference issues.
Because of the shallow copy (copying data members irrespective of their types) which is by default. 
*/

#include<iostream>
using namespace std;

class A{
private:
    int *x;
    int N;
public:
    A():x(NULL){   //default constructor

    }

    void allocateX(int N){
        this->N=N;
        x=new int [this->N]; //dyn.mem.alloc
    }

    void getX(){
        cout<<*x<<endl;
    }

    ~A(){  //destructor
        delete []x; //dealloc
    }
};

int main(){
    A obj1; //default constructor is called
    obj1.allocateX(10);
    obj1.getX();

    A obj2=obj1;  //default copy constructor is called
    obj2.getX();

    A obj3;  //default constructor is called
    obj3=obj1;  //default =operator ftn is called
    obj3.getX();

    return 0;
}

