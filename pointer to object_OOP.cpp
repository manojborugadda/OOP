/*passing objects and returning objects in a function*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class ComplexNuumber{
private:
    /*data members-------*/
    int real;
    float imaginary;
public:
    ComplexNuumber() // default constructor------------------
    {

    }
    // parameterized constructor----------------------------
    ComplexNuumber(int r,float i)
    {
        real = r;
        imaginary = i;
    }
    void display()
    {
        cout<<"complex number is : "<<real<<"+"<<imaginary<<"i"<<endl<<endl;
    }
    int getRealPart()
    {
        return real;
    }
    float getImaginaryPart()
    {
        return imaginary;
    }

};

ComplexNuumber add2numbers(ComplexNuumber n1,ComplexNuumber n2)
{
    int r;
    int i;
    r = n1.getRealPart() + n2.getRealPart();
    i  = n1.getImaginaryPart() + n2.getImaginaryPart();
    ComplexNuumber temp(r,i); // this temp is temporary object which is to be returned
    return temp;
}

 int main()
{
ComplexNuumber comp1(5,4),comp2(2,3),comp3;
comp1.display(); //5+4i
comp2.display(); //2+3i
cout<<"addition of the comp1 and comp2"<<endl;
comp3 = add2numbers(comp1,comp2);// passing objects in a function
comp3.display();
//pointer to an object------------------------
cout<<"pointer to a object"<<endl;
ComplexNuumber *ptr1;
ptr1 = &comp3;
ptr1->display();

  return 0;

  }

