//#24. C++ Break Statement with Example :
#include<iostream>
using namespace std;
/*break-used to terminate a loop immediately 
& control'll be passed to the next statement
also used in switch , to terminate a case
NOTE:if used in nested loop,
inner loop'd be terminated & control passed 2 d outer loop &continued normally*/
int main()
{
	int counter;
	for(counter=0;counter<5;counter++)//outer loop
	{
		int innerctr;
		for(innerctr=1;innerctr<=3;innerctr++)//inner loop
			{cout<<innerctr<<endl;
		if(innerctr==2)break;}//control passed 2 outer loop
	
	}

	return 0;
}
