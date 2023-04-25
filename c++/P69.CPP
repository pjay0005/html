#include<iostream>
using namespace std;
class A
{
    public:
    int m1,m2,m3;
    char name[10];
    void get()
    {
        cout<<"m1=";
        cin>>m1;
        cout<<"m2=";
        cin>>m2;
        cout<<"m3=";
        cin>>m3;
        cout<<"name=";
        cin>>name;
    }
};
class B:public A
{
        public:
        int total;
        float per;
        void cal()
        {
            total=m1+m2+m3;
            per=total/3;
        }
};
class C:public B
{
    public:
    void put()
    {
        cout<<"total="<<total<<endl;
        cout<<"per="<<per<<endl;
    }
};
int main()
{
    C f;
    f.get();
    f.cal();
    f.put();
    return 0;
}