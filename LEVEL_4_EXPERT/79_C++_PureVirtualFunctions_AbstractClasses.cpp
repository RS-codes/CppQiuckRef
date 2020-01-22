//79. C++ Pure Virtual Functions, Abstract Classes :

/*
Attention pls:  when a virtual ftn is not redefined by derived class , version defined by base class is used. If any derived class redifinition is there, dat will be used.
However in many situation there can be no meaningful definition of a virtual ftn within the base class 
For eg., in some cases base class may not be able to define  an object sufficiently  to allow a base class  virtual ftn to be created OR if we want all derived class  to override a base class  ftn.
In such cases use PURE VIRTUAL FUNCTION  
*/


/*An example of when pure virtual functions are necessary

	For example, let’s say that you have a base class called Figure. The Figure class has a function called draw. And, other classes like Circle and Square derive from the Figure class. In the Figure class, it doesn’t make sense to actually provide a definition for the draw function, because of the simple and obvious fact that a “Figure” has no specific shape. It is simply meant to act as a base class. Of course, in the Circle and Square classes it would be obvious what should happen in the draw function – they should just draw out either a Circle or Square (respectively) on the page. But, in the Figure class it makes no sense to provide a definition for the draw function. And this is exactly when a pure virtual function should be used – the draw function in the Figure class should be a pure virtual function.    

*/



#include<iostream>
using namespace std;


class Person{   //ABSTRACT CLASS,since contains one or more PURE VIRTUAL FUNCTION
public:
	virtual void display()=0;	//pure virtual function [syntax: virtual return_type ftn_name(parameters, if any)=0;]
};


//to define the method, use SCOPE RESOLUTION OPERATOR  [syntax: return_type BASEclass_name::method_name(){body of the ftn;}]

void Person ::display(){

	cout<<"hi from person"<<endl;
}


class student: public Person{	//this SHOULD override the base class method
public:
	virtual void display(){
	
	cout<<"hi from student"<<endl;

	//if u want dat base class method 2 be called , use SCOPE RESOLUTION OPERATOR
	Person::display();
	}

};



int main()
{
	//Person AuthorRS;   error:object cant be created for an ABSTRACT CLASS
	student bamu;
	bamu.display();

	return 0;
}

