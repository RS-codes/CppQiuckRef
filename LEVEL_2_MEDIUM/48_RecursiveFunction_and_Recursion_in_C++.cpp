//#48. Recursive Function and Recursion in C++:
#include<iostream>
using namespace std;
int factorial(int n){
if(n==1)
return 1;
else
return n*factorial(n-1);//recursive ftn
}

int main()
{
cout<<factorial(3)<<endl; //3*2*1=6
return 0;
}
