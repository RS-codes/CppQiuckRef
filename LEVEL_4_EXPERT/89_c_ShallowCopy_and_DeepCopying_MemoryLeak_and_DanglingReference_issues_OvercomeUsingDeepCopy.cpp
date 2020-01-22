//89.c shallow copy & deep copying-memory leak and dangling reference issues

//to overcome the above issues, use DEEP COPY


#include<iostream>
using namespace std;

class A{
private:
    int *x;
    int N;
public:
    A():x(NULL){  //default constructor

    }

    //copy constructor with deep copy
    A(const A &ob){
        this->N=ob.N;
        this->x=new int [this->N]; //x
    }

    //= operator with deep copy
    void operator=(const A & ob){
        this->N=ob.N;
        this->x=new int [this->N];
    }

    void allocateX(int N){
        this->N=N;
        this->x=new int[this->N];
    }

    void getX(){
        cout<<x<<endl;  //*x or return x
    }

    ~A(){  //destructor
        delete []x;  //dealloc
    }
};

int main(){
    A obj1; //default constructor is called
    obj1.allocateX(10);
    obj1.getX();

    A obj2=obj1;  //deep copying copy constructor is called
    obj2.getX();

    A obj3;  //default constructor is called
    obj3=obj1;  //deep copy =operator ftn is called
    obj3.getX();

    return 0;
}

