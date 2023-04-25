#include<iostream>
using namespace std;
class A
{
    public:
    int a,b,sum;
    void get()
    {
        cout<<"enter a=";
        cin>>a;
        cout<<"enter b=";
        cin>>b;
    } 
    void cal()
    {
        sum=a+b;
    }
};
class B:public A
{
    public:
    void put()
    {
        cout<<"sum="<<sum;
    }
};
int main()
{
    B f;
    f.get();
    f.cal();
    f.put();
    return 0;
}