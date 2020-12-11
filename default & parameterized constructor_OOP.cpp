#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Car{
private:
    //member variables (or) data variables -----------------------------------------------------------
    string company_name;
    string model_name;
    string fuel_type;
    double price;
    float mileage;
public:
    //default constructor---------------------
    Car()
    {
        company_name = "scoda";
        // cout<<"default constructor"<<endl;
    }
    //parameterized constructor-----------------------------------------------------
    Car(string cname,string mname,string ftype,double p,float m)
    {
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        price = p;
        mileage = m;
    }

    // member functions--------------------------------------------------------------------
    void setData(string cname,string mname,string ftype,double p,float m )
    {
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        price = p;
        mileage = m;
    }
    void displayData()
    {
        cout<<"car properties--"<<endl<<endl;
        cout<<"company name--"<<company_name<<endl;
        cout<<"car model name--"<<model_name<<endl;
        cout<<"fuel type--"<<fuel_type<<endl;
        cout<<"car price--"<<price<<endl;
        cout<<"car mileage--"<<mileage<<endl;
    }
};


int main()
{
Car car1,car2("alto","maruti","petrol",15000,15.3);
car1.setData("KIA","brezza","diesel",190000,12.8);
car1.displayData();
car2.displayData();
	return 0;
}
