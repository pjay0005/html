#include<iostream>
using namespace std;
class rec
{
    public:
    int l,w,rec;
    void get()
    {
        cout<<"length=";
        cin>>l;
        cout<<"width=";
        cin>>w;
    }
    virtual void put()
    {
        rec=l*w;
        cout<<"rec="<<rec<<endl;
    }
};
class tri:public rec
{
    int tri;
    void get()
    {
        cout<<"length=";
        cin>>l;
        cout<<"width=";
        cin>>w;
    }
    void put()
    {
        tri=(l*w)/2;
        cout<<"tri="<<tri<<endl;
    }
};
int main()
{
    rec R;
    tri T;
    rec*rptr;
    rptr=&R;
    rptr->get();
    rptr->put();
    rptr=&T;
    rptr->get();
    rptr->put();
    return 0;
}