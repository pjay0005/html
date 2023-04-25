#include<iostream>
using namespace std;
class base
{
    public:
    void disp()
    {
        cout<<"simple function in base class"<<endl;
    }
    virtual void show()
    {
        cout<<"virtual function in base class"<<endl;
    }
};
class derived:public base
{
    void disp()
    {
        cout<<"same simple function in derived class"<<endl;
    }
    void show()
    {
        cout<<"same virtual function in derived class"<<endl;
    }
};
int main()
{
    base B;
    derived D;
    base *bptr;
    bptr=&B;
    bptr->disp();
    bptr->show();
    bptr=&D;
    bptr->disp();
    bptr->show();
    return 0;
}