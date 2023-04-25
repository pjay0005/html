#include<iostream>
using namespace std;
class bank
{
    public:
    int accnum,totalbal;
    char name[10];
    void get()
    {
        cout<<"acc num=";
        cin>>accnum;
        cout<<"total balance=";
        cin>>totalbal;
        cout<<"name=";
        cin>>name;
    }
};
class depo:public bank
{
    public:
    int depi,m;
    void cal
};