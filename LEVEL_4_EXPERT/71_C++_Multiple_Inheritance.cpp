//71. C++ Multiple Inheritance Explained with example :

#include<iostream>
using namespace std;

class Device{
public:
    Device(){
    cout<<"inherited from Device class"<<endl;
    }
    int id;
    /*void setid(int iid){   //thru this method also we can do
    id=iid;}*/
};

class Wless{
public:
    Wless(){
    cout<<"inherited from Wless class"<<endl;}
    int model;
    /*void setmodel(int mno){ //thru this method also we can do
    model=mno;}*/
};

class Btooth:public Device,public Wless{
public:
    Btooth(){
    cout<<"Multiple inheritance"<<endl;}

    void setid_model(int iid,int imodel){
    id=iid;
    model=imodel;
    /*setid(iid); //thru this method also we can do
    setmodel(imodel);*/
    }

    void thisp()
    {
    cout<<id<<"  "<<model<<endl;}
};

int main()
{
    Btooth bt;
    bt.setid_model(123,1100);
    bt.disp();
    return 0;
}

