//#22. C++ Inline Function _ Inline Keyword:
#include<iostream>
using namespace std;

inline void display(int x){  //use ‘inline’ for SHORT FTNs 
//WARNING: don’t use ‘inline’ for large ftns
cout<<x<<endl;
}

int main()
{
	display(10);//(compiler)reduces overhead by replacing the ftn call by ftn body
	return 0;
}
