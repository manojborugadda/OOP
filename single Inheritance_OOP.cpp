#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Shape ///// BASE CLASS--------------
{
protected:
        int width;
        int length;
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setLength(int l)
    {
        length = l;
    }

};

class Rectangle:public Shape{        ////DERIVED CLASS--------------

public:
    int getArea()
    {
        return(width*length);
    }
};
 int main()
 {
 Rectangle rect1;
 rect1.setLength(5);
 rect1.setWidth(7);
 cout<<"The area of the Rectangle is : "<<rect1.getArea()<<endl;
  return 0;

  }

