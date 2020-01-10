//#19. Introduction to Functions _ Subroutines :
#include<iostream>
using namespace std;

void display();//ftn prototype syntax: return_type ftn_name(par_data_type,…)

int main() //return_type ftn_name(parameter)
{
	display();
	display(); //can be called n times
	return 0;
}

void display()
{
	cout<<"ftn called"<<endl;
}
