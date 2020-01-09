//#14.  While Loop _ Introduction to Looping :
#include<iostream>
using namespace std;

int main()
{
	int counter=1;
	while(counter<=30){ //while(expr){stmnt..}
	cout<<counter<<"-> time Loop running"<<endl;
	counter++; //at some point, expr must evaluate FALSE
	//WARNING: OR ELSE U'LL STUCK INSIDE INFINTE LOOP
	}

	return 0;
}
