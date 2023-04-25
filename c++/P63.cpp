#include<iostream>
using namespace std;
class dis
{
    public:
    int feet,inch;
    void getdata()
    {
        cout<<"enter feet=";
        cin>>feet;
        cout<<"enter inch=";
        cin>>inch;
    }
    void putdata()
    {
        cout<<"================="<<endl;
        cout<<"feet="<<feet<<endl;
        cout<<"inch="<<inch<<endl;
    }
    void con(dis d1,dis d2)
    {
        feet=d1.feet+d2.feet;
        inch=d1.inch+d2.inch;
        feet=feet+(inch/12);
        inch=inch%12;
    }
};
int main()
{
    dis d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3.con(d1,d2);
    d3.putdata();
    return 0;
}