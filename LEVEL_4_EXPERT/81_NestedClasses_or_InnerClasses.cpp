//81. Nested Classes or Inner classes : 

#include<iostream>
#include<string>

using namespace std;

class Person{
public:
	string name;

	class Address{    //Nested class
	public:
		int hno;
		string stName;
		string place;	
	};
	Address addr; //object of the inner class Address

	//method to call the properties
	void Locate(){
		cout<<name<<endl<<addr.hno<<endl<<addr.stName<<endl<<addr.place<<endl;
	
	}

};

int main()
{
	Person AuthorRS;
	AuthorRS.name="AuthorRS";
	//AuthorRS.hno=18;  //error ,since diff scope
	AuthorRS.addr.hno=18;
	AuthorRS.addr.stName="DummyStrt";
	AuthorRS.addr.place="DummyPlace";
	AuthorRS.Locate();


	//Address ad;	      object creation //error, since its nested class

	//using SCOPE RESOLUTION OPERATOR, can create object for the nested class
	
	Person::Address ad; //initialize if u want
	
	return 0;
}



