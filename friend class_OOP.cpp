#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Myclass1                ////////class 1 ------------------
{
friend class Myclass2;    //////class 2 is friend of class 1 ///////
private:
    int x;
public:
    Myclass1(int a)         /////////we are taking parameterized constructor here for our convenience--------------
    {
        x = a;
    }
};
class Myclass2           ////////////////class 2///////////////
{
public:
    void ShowData(Myclass1 obj)
    {
        cout<<" x value is : "<<obj.x<<endl;
    }
};

int main()
{
Myclass1 obj1(5);
Myclass2 obj2;
obj2.ShowData(obj1);
return 0;
}
