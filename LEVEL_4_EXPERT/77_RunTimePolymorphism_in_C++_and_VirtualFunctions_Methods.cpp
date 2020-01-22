//77. Run Time Polymorphism in C++ and Virtual Functions _ Methods :
//(RUN TIME POLYMORHISM)

/*Virtual Functions are used to support Run time Polymorphism. ... When the virtual function is called by using a Base Class Pointer, the Compiler decides at Runtime which version of the function i.e. Base Class version or the overridden Derived Class version is to be called. This is called Run time Polymorphism.*/
/* Run time polymorphism->call to a  member ftn , cause diff ftn to be executed, based on the type of obj invoking the ftn  i.e., ftn works in diff forms
polymorphism occurs when there is a hierarchy of classes and they are related by inheritance */

/*virtual-> informs compiler not to call dat ftn, when its overridden,  and we know usually base class method is overridden by derived class methods*/

/*NOTE: if the base class method is not overridden, call thru derived class OBJECT calls base class method */

#include<iostream>
using namespace std;

class Person{
public:
	virtual void display(){
	cout<<"hi person"<<endl;	
	}
};

class student : public Person{
public:
	void display(){
	cout<<"hi student"<<endl;	
	}
};

class Farmer : public Person{

public:
	void display(){
	cout<<"hi farmer"<<endl;	
	}
};

void whosThis(Person &p){ /* LOOK CLOSER: pass by reference-base class reference   (Person &p) */
	p.display();
}


int main()
{
	student anil;
	Farmer muthu;
	whosThis(anil);
	whosThis(muthu);
	return 0;

}


