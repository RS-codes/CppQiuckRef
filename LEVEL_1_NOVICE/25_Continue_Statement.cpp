//#25. C++ Continue Statement with Example :
#include<iostream>
using namespace std;
/*continue->skips current iteration,continue with next stmnt
if used in 'for loop'->skips ct condition, continues with conditional chk & updation
if used in 'do while'->skips ct condition, continues with conditional chk*/

/*int main()
{
	int counter;
	for(counter=1;counter<=10;counter++){		
		if(counter==5){
		continue;//skips when counter=5,control goes to-> counter++ ->counter<=10
		}
		cout<<counter<<endl;
	}
	return 0;
}*/

int main()
{
	int counter=1;
	while(counter<=10){
		if(counter==5){
			counter++;//this avoids getting stuck inside d 'if loop'
			continue;}/*skips printing counter value 5, control goes 2 conditional chk*/
	cout<<counter<<endl;
	counter++;
	}
	return 0;
}
