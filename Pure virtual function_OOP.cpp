#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Shape ////BASE CLASS
{
public:
    virtual void area() = 0;         //////////////////PURE VIRTUAL FUNCTION----------------------------

};
class Square:public Shape // DERIVED class1
{
    public:
    void area()
    {
        int s;
        cin>>s;
        cout<<"the area of the sqaure is: "<<s*s<<endl;
    }
};
class Rectangle:public Shape //DERIVED class2
{
    public:
    void area()
    {
        int l,b;
        cin>>l>>b;
        //int area = l*b;
        cout<<"the area of the rectangle : "<<l*b<<endl;
    }
};

  int main()
  {
      Rectangle rec1;
      rec1.area();
       Square s1;
       s1.area();
  }
