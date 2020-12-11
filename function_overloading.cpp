#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int add(int a,int b)
 {
    cout<<"first function";
      return(a+b);
 }
 double add(double a,double b)
 {
      cout<<"second function";
      return(a+b);
 }
 int add(int a,int b,int c)
 {
      cout<<"third function";
      return(a+b+c);
 }
 double add(int a,double b)
 {
     cout<<"fourth function";
      return(a+b);

 }

 int main()
{

    cout<<add(3,2);
    cout<<add(3.5,2.5);
    cout<<add(3,2,5);
    cout<<add(3,2.5);


  return 0;

  }

