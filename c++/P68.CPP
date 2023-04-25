#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    void getx()
    {
        cout<<"enter x=";
        cin>>x;
    }
};
class B
{
    public:
    int y;
    void gety()
    {
        cout<<"enter y=";
        cin>>y;
    }
};
class C:public A,public B
{
    public:
    void max()
    {
        if(x>y)
        {
            cout<<"x is max = "<<x;
        }
        else
        {
            cout<<"y is max = "<<y;
        }
    }
};
int main()
{
    C f;
    f.getx();
    f.gety();
    f.max();
    return 0;
}