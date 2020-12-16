#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class A               /////////////////////////////////////base class 1------------
{
public:
    void printmessage(){
        cout<<"class A print message: "<<endl;
    }
};
class B               ////////////////////////////////base class 2-----------------------
{
public:
    void printmessage()
    {
        cout<<"class B print message: "<<endl;
    }
};

class AB:public A, public B   /////////////////////// derived class-----------------
{
    public:
    void printmessage()
    {
        cout<<"class AB print message: "<<endl;
        A::printmessage();
        B::printmessage();
    }
};
  int main()
  {
      AB obj;
      obj.printmessage();
  }
