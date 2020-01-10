//#21. C++ Default Function Parameters :
#include<iostream>
using namespace std;

void display(int x,int y ,int z=10){  //start initializing frm RIGHTMOST variable 

	//void display(int x=10,int y,int z){  //generates ERROR,since u initialized the LEFTMOST var
cout<<x<<endl;
cout<<y<<endl;
cout<<z<<endl;
}

int main()
{
	display(30,20);//calling ftn with only 2 parameters
	//display(30,20,40)  // can be used,overwrites the default ftn parameter
	return 0;
}
