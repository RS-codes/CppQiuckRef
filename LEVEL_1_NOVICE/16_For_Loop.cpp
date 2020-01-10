//#16. For Loop with Example:
#include<iostream>
using namespace std;

int main()
{
	int counter;
	//syntax: for(init;cond;updation)
	/*NOTE: for(;;) infinite loop
	(loop without updation leads to inf loop*/
	for(counter=1;counter<=30;counter++)
		cout<<counter<<"-> for loop running"<<endl;
	return 0;
}
