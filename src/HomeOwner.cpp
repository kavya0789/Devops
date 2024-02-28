#include<iostream>
using namespace std;
class HomeOwner
{
public:
    bool active;
    string name;
    int age;
    HomeOwner(bool active,string name,int age)
    {
        this->active=active;
        this->name=name;
        this->age=age;
    }
    bool isactive()
    {
        active=true;
        cout<<"The owner is active"<<endl;
        return active;
    }
    bool isnotactive()
    {
        active=false;
        cout<<"The owner is not active"<<endl;
        return active;
    }
    void showdetails()
    {
        cout<<"Name"<<name<<"\t age"<<age<<"\t activity:"<<active<<endl;
    }

};
