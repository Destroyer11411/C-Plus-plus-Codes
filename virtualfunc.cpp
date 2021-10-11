#include<iostream>
using namespace std;

class base
{
    public:
    virtual void func()
    {
        cout<<"this is the func from base\n";
    }
};

class derived1:public base
{
    public:
    void func()
    {
        cout<<"this is from the derived 1 func\n";

    }
};

class derived2:public base
{
    public:
    void func()
    {
        cout<<"this is from the derived func 2\n";

    }
};


int main()
{
    base *p,b;
    p=&b;
    p->func();

    derived1 d1;
    p=&d1;

    p->func();
    
    derived2 d2;
    p=&d2;

    

    p->func();
}

