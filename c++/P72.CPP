#include<iostream>
using namespace std;
class data
{
    public:
    int p,r,n,si;
    void get()
    {
        cout<<"enter p=";
        cin>>p;
        cout<<"enter r=";
        cin>>r;
        cout<<"enter n";
        cin>>n;
    } 
    void cal()
    {
        si=p*r*n/100;
    }
};
class B:public data
{
    public:
    void put()
    {
        cout<<"si="<<si;
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