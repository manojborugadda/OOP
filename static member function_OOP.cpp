#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Myclass
{
private:
    int x;
    static int count;
public:
    Myclass()                   /////////constructor------------
    {
        count++;
    }
    static int  getcount()
    {
        return count;
    }
};

int Myclass::count=0;           ////////////initialization of static member outside the class ---------------------
int main()
{
 cout<<"initial count : "<<Myclass::getcount()<<endl;
 Myclass obj1,obj2,obj3;
 cout<<"count after creating first object :"<<Myclass::getcount()<<endl;

}
