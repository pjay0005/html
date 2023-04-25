#include<iostream>
using namespace std;
class time
{
    public:
    int a,b,c;
    void get(int hr,int mi,int se)
    {
        a=hr;
        b=mi;
        c=se;
    }
    void put()
    {
        cout<<"\n hrs="<<a<<endl;
        cout<<"min="<<b<<endl;
        cout<<"sec="<<c<<endl;
    }
    time operator +(time t1);
};
time time::operator +(time t1)
{
    time t;
    t.a=a+t1.a;
    t.b=b+t1.b;
    t.c=c+t1.c;
    t.b=t.b+(t.c/60);
    t.c=t.c%60;
    t.a=t.a+(t.a/60);
    t.b=t.b%60;
    return t;
}
int main()
{
    time t1,t2,t3;
    t1.get(1,60,70);
    t1.put();
    t2.get(1,60,71);
    t2.put();
    t3=t1+t2;
    t3.put();
    return 0;
}