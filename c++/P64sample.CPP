#include<iostream>
using namespace std;
class ABC
{
    int a,b;
    public:
    ABC()
    {
        a=10;
        b=20;
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    ABC(int a1,int b1)
    {
        a=a1;
        cout<<"a="<<a<<endl;
        b=b1;
        cout<<"b="<<b<<endl;
    }
    ABC(ABC&r)
    {
        a=r.a;
        cout<<"a="<<a<<endl;
        b=r.b;
        cout<<"b="<<b<<endl;
    }
};
int main()
{
    ABC d;
    ABC d1(30,40);
    ABC d2(d1);
    return 0;
}