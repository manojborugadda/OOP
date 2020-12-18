#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Weight
{
private:
    int kg;
public:
    Weight()
    {
        kg = 0;
    }
    Weight(int k)
    {
        kg = k;
    }
    void printWeight()
    {
        cout<< "weight in kg : "<<kg<<endl;
    }
    void operator ++()                    //////////////pre increment  operator ++x////////////////////////

    {
         ++kg;
    }
    void operator ++(int)           /////////////////post increment operator x++////////////////////
    {
        kg++;
    }
    void operator --()                /////////////////pre decrement
    {
        --kg;
    }
    void operator --(int)          /////////////////////post decrement
    {
        kg--;
    }

};
int main()
{
    Weight obj1,obj2;
    cout<<"examples of increment operators"<<endl;
    obj1.printWeight();
    obj1++;
    obj1.printWeight();
    ++obj1;
    obj1.printWeight();
    cout<<"examples of decrement operators"<<endl;
    obj2.printWeight();
    ++obj2;
    obj2.printWeight();
    --obj2;
    obj2.printWeight();
    return 0;

}

