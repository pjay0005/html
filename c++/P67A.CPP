#include<iostream>
using namespace std;
class a
{
    public:
    int l,b,rec;
    void get()
    {
        cout<<"enter l=";
        cin>>l;
        cout<<"enter b=";
        cin>>b;
    } 
    void cal()
    {
        rec=l*b;
    }
};
class b:public a
{
    public:
    void put()
    {
        cout<<"rec="<<rec;
    }
};
int main()
{
    b e;
    e.get();
    e.cal();
    e.put();
    return 0;
}