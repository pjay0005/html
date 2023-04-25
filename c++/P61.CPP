#include<iostream>
using namespace std;
class time
{
    public:
    int hrs,min,sec;
    void getdata()
    {
        cout<<"enter hrs=";
        cin>>hrs;
        cout<<"enter min=";
        cin>>min;
        cout<<"enter sec=";
        cin>>sec;
    }
    void putdata()
    {
        cout<<"hrs="<<hrs<<endl;
        cout<<"min="<<min<<endl;
        cout<<"sec="<<sec<<endl;
    }
    void con(time t1,time t2)
    {
        hrs=t1.hrs+t2.hrs;
        min=t1.min+t2.min;
        hrs=hrs+(min/60);
        min=min%60;
        sec=t1.sec+t2.sec;
        min=min+(sec/60);
        sec=sec%60;
    }
};
int main()
{
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.con(t1,t2);
    t3.putdata();
    return 0;
}
