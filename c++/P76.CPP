#include<iostream>
#include<string.h>
using namespace std;
class account
{
    public:
    int acc,bal;
    char name[20];
    void get()
    {
        cout<<"name=";
        cin>>name;
        cout<<"account no=";
        cin>>acc;
        cout<<"balance=";
        cin>>bal;
    }
};
class with: public account
{
    public:
    int with,w;
    void cal()
    {
        cout<<"withdraw=";
        cin>>with;
        w=bal-with;
        cout<<"after withdraw="<<w;
    }
};
class depo: public account
{
    public:
    int dipo,d;
    void put()
    {
        cout<<"deposite=";
        cin>>dipo;
        d=bal+dipo; 
        cout<<"after deposite="<<d;
    }
};
int main()
{
    with w;
    depo d;
    w.get();
    w.cal();
    d.get();
    d.put();
    return 0;
}