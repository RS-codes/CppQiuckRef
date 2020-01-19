//#41. Introduction to Unions in C++:
#include<iostream>
using namespace std;

union emp{
int id;
float salary; //both id and salary shares same memory
}rs,bamu; //variables can be created here
/*note: only 4 byte is reserved for this union and both d members share d same block*/
int main()
{
emp AuthorRS; //var can be created here also
AuthorRS.id=891401;
cout << AuthorRS.id<< endl;
return 0;
}
