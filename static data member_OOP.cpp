#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Myclass
{
public:
    int x;
    static int count;
    Myclass()                   /////////constructor------------
    {
        count++;
    }
};

int Myclass::count=0;           ////////////initialization of static member outside the class ---------------------
int main()
{
 cout<<"initial count : "<<Myclass::count<<endl;
 Myclass obj1,obj2,obj3;
 cout<<"count after creating first object :"<<Myclass::count<<endl;

}
