//82. Local Classes in C++ :

#include<iostream>
#include<string>
using namespace std;


void studentList();		//function prototype


int main()
{
	studentList();		//function call
	return 0;
}

void studentList(){
	class student{		//local class
	public:
		string name;
		int age;

		void display(){		//method to access the properties
		cout<<name<<endl<<age<<endl;
		
		}
	
	};

	student bamu;		//object
	bamu.name="bamu";
	bamu.age=18;
	bamu.display();

}


