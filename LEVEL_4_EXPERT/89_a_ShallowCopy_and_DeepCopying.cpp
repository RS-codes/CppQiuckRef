//89.a shallow copy & deep copying


/*

Constructor : Its a special function called when object of class is created. Ideally a constructor must contain the logic to initialize the data members of the class.

Copy Constructor: It is called when an object is initialized at the time of creation. There exist more scenario when an copy constructor is called.

Operator function: C++ allows to overload operator with the help of operator keyword. This helps us to treat user defined types as basic types. 

Default copy constructor and =operator function are inserted by compiler incase they are missing from the class. It performs a bit pattern copy i.e. simply copies data members of one object into another object.

*/

#include<iostream>
using namespace std;

/*default constructor and default copy constructor
are inserted by compiler, when it is missing from a class */
class A{
private:
    int x; //data member
public:
   A():x(0){ //default constructor
    }
    void getX(){
        cout<<x<<endl;
    }
};

int main(){
    A obj1; //default constructor called
    A obj2=obj1; //default copy constructor is called
    obj1.getX(); //0
    obj2.getX(); //0

    A obj3;//default constructor is called
    obj3=obj1; //default =operator ftn is called
    obj3.getX(); //0
    return 0;
}


/* The above code will work as expected until the class member is not allocated any resource (file or memory). */

