#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Animal ////BASE CLASS
{
public:
    virtual void eat()
    {
        cout<<"the animal eats the food"<<endl;
    }
};
class Cat:public Animal // DERIVED class1
{
    void eat()
    {
        cout<<"the cat eats the mouse"<<endl;
    }
};
class Dog:public Animal //DERIVED class2
{
    void eat()
    {
        cout<<"the dog eats the meat"<<endl;
    }
};
 void function1(Animal *abc) //////////////////////////stand alone function outside the class
 {
     abc->eat();
 }
  int main()
  {
      Animal *ptr; //pointer of the base class/////
      Cat catobj;//object of the derived class
      Dog dogobj; //object of the derived class
      ptr = &catobj;
      function1(ptr);
      cout<<endl;
       ptr = &dogobj;
      function1(ptr);
      cout<<endl;


  }
