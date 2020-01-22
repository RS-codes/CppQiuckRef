//68_b_Private_Inheritance_C++

/*solution for the above issue(create one more (PUBLIC)ftn in Derived class, from Der2 class via that public ftn access  mem of base class .Flow goes from step1 to step 4, in the below code snippet)
*/

#include<iostream>
using namespace std;

/*PRIVATE INHERITANCE*/

class Base{
private:
/*CANT BE INHERITED*/

protected:/*acts as PRIVATE member in derived class*/
    int id;
public:/*acts as PRIVATE member in derived class*/
    void setid(int iid){/*4th--> (setid) member ftn set value of id*/
    id=iid;}
};

class Derived:private Base{/*private inheritance*/
public:
    void d1id(int iid){/*3rd-->(d1id) member ftn calls (setid) member ftn*/
    setid(iid);
    }

    void disp(){
    cout<<id<<endl;}
    };

class Der2:public Derived{
public:
    void d2id(int iid){/*2nd-->(d2id) member ftn calls (d1id) member ftn*/
    d1id(iid);
    }
};

int main()
{
    Der2 d;
    d.d2id(786);/*1st-->derived2 object calls (d2id) member ftn*/
    d.disp();/*since disp()is public ftn it can be called outside class*/
    return 0;
}

