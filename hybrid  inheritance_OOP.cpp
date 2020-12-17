#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class base
{
protected:
    int val;
};
class derived1:virtual public base
{
public:
    derived1() ////////////////////------------/constructor/----------------////////////////
    {
        val = 1;
    }
    void getvalue()
    {
        cout<<"the value of the derived1 is :"<<val<<endl;
    }
};
class derived2:virtual public base           //////////////////////////////here virtual keyword will tell us either of the classes will be inherited/////
{
public:
    derived2() ////////////////////------------/constructor/----------------////////////////
    {
        val = 2;
    }
    void getvalue()
    {
        cout<<"the value of the derived2 is :"<<val<<endl;
    }
};
class derived3:public derived1,public derived2
{
public:

    void getvalue()
    {
        cout<<"the value of the derived3 is :";
        derived1::getvalue();
    }
};

int main()
{
    derived3 obj;
    obj.getvalue();
}
