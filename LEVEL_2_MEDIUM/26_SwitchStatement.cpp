//#26. C++ Switch Statement with Example :
#include<iostream>
using namespace std;
int main()
{
	char input='z';
	switch(input){//data type of switch input & case shud be same
	case'A':{
		cout<<'A'<<endl;
		break;
	}
	case'B':{
		cout<<'B'<<endl;
		break;}
	case'C':{
			 cout<<'C'<<endl;
			break;
			 }
	default:
		cout<<"default"<<endl;//if none of d cases matches,default'll be exectd
		//no need of break in default case
	}
	return 0;
}
