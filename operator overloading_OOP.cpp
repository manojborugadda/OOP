#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int imag;
public:
    Complex()
    {
         real = 0;
         imag = 0;
    }

    Complex(int r,int i)
    {
         real = r;
         imag = i;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    //operator overloading syntax------------------
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real+c.real;
        temp.imag = imag+c.imag;
        return temp;
    }
};

int main()
{
Complex c1(5,4);
Complex c2(9,3);
Complex c3;
c3 = c1+c2;
c3.display();
return 0;

}

