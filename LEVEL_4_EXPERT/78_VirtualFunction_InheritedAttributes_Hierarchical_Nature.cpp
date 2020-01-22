//78. Virtual Function _ Inherited Attributes, Hierarchical Nature :

/*no matter how mny times virtual ftn is inherited, it remains virtual#  */

#include<iostream>
using namespace std;

class Person{
public:
	virtual void display(){            //virtual function
	cout<<"hi from person"<<endl;	
	}

};

class student : public Person{      //inherit from base class person
public:
	void display(){         //overridden the base class method
	cout<<"hi from student"<<endl;	
	}

};
 
class Gstudent : public student{ /#Important:*virtual nature is inherited*///inherit from derived class student
public:
	/*void display(){ /* $ commented to demostrate hierarchial nature*/
	cout<<"hi from Graduate student"<<endl;	  //overridden the base class method
	}*/
};

//call a method by passing the base class parameter, by reference
void whosThis(Person &p){
	p.display();
}

int main()
{
	Person AuthorRS;	//base class object
	student bamu;	//derived class object
	Gstudent randomGuy;	//derived class object, inherited from anthr D.class

	whosThis(AuthorRS);
	whosThis(bamu);
	whosThis(randomGuy);	/*calls the method from class student,since no overridden method by dat class, demonstrates “hierarchial nature “ $ */

	return 0;
}


