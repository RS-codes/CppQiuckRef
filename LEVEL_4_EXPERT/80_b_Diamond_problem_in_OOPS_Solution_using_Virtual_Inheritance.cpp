//80.b Diamond problem in OOPS, Solution using Virtual Inheritance with Example

/*DIAMOND PROBLEM-solution*/

#include<iostream>

using namespace std;

//SOLUTION for diamond problem, use VIRTUAL INHERITANCE

class Animal{
public:
	void walk(){
	cout<<"Animal walks"<<endl;	
	}
};

class Lion : virtual public Animal{	  //virtual inheritance
		
};


class Tiger : virtual public Animal{  //virtual inheritance
		
};


class Liger : public Lion, public Tiger{ /* virtual inheritance provides only one instance of d common base class*/
		
};

int main()
{
	Liger diamond;
	diamond.walk();  //calls base class method, since VIRTUALLY INHERITED


	return 0;
}


 /* NOTE: its recommended to use virtual inheritance , when we want to use a derived class as a base class to another derived class   <- read it again :)  */

