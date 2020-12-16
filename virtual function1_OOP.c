#include<iostream>
using namespace std;

class MyBase                         ///////base class/////
{
public:
    void show()
    {
        cout<<"base class SHOW function called : "<<endl;
    }
    virtual void print()
    {
        cout<<"base class PRINT  function called "<<endl;
    }
};
class MyDerived:public MyBase  ///////DERIVED CLASS/////////
{

       void show(){
        cout<<"derived class SHOW function called : "<<endl;
    }
    void print()
    {
        cout<<"derived class PRINT  function called "<<endl;
    }
};

int main()
{
    //RUN TIME POLYMORPHISM
 MyBase* baseptr;
 MyDerived deriveobj;
 baseptr = &deriveobj;
 baseptr->show();          //base show function is called
 baseptr->print();          // derived print function is called ///

}

