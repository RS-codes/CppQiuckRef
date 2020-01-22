//80.c Diamond problem in OOPS, Solution using Virtual Inheritance constructor call order

#include<iostream>
using namespace std;

//constructor call order
class Animal{
public:
	Animal(){   //base class constructor
	cout<<"base class constructor called"<<endl;
	
	}
	void walk(){
	cout<<"Animal walks"<<endl;	
	}
};

class Lion : virtual public Animal{	  //virtual inheritance
public:
	Lion(){   //derived_1a class constructor
	cout<<"derived_1 class constructor called"<<endl;
	
	}
		
};


class Tiger : virtual public Animal{  //virtua linheritance
public:
	Tiger(){   //derived_1b class constructor
	cout<<"derived_1b class constructor called"<<endl;
	
	}
};


class Liger : public Lion, public Tiger{
public:
	Liger(){   //derived_2 class constructor
	cout<<"derived_2 class constructor called"<<endl;
	
	}	
};

int main()
{
	Liger diamond;
	diamond.walk();  //calls base class method, since VIRTUALLY INHERITED


	return 0;
}



/*
output:
base class constructor called
derived_1 class constructor called
derived_1b class constructor called
derived_2 class constructor called
Animal walks
Press any key to continue . . .
*/
