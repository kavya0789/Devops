#ifndef SMARTBED_H
#define SMARTBED_H
#include <string>
class SmartBed {
public:
    bool active;
    string name;
    int age; 
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

#endif