#include<iostream>
class SmartBed
{
public:
    bool getsout;
    SmartBed(bool getsout)
    {
        this->getsout=getsout;
    }
    bool gotup()
    {
        active=true;
        cout<<"The owner has got out of the bed"<<endl;
        return getsout;
    }
    bool notgotup()
    {
        active=false;
        cout<<"The owner has not got out of the bed"<<endl;
        return getsout;
    }

};
