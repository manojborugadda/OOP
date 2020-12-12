#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Distance{
   private:
       int meters;
   public:
    Distance()
    {
        meters = 0;
    }
    void displayData()
    {
        cout<<"meters value is :"<<meters<<endl<<endl;
    }
    friend void addValue(Distance &d); // prototype or signature -----------
};

 void addValue(Distance &d) // BODY OF THE FRIEND FUNCTION--------
   {
       d.meters = d.meters+5;
   }
int main()
{
Distance d1;
d1.displayData(); // it shows initially ZERO as it takes form default constructor------
// the friend function call*******
addValue(d1); // pass by reference is happening here--------
d1.displayData();
return 0;
}
