#include<iostream>
using namespace std;
class ABC
{
    int a;
    public:
    void get(int x)
    {
        a=x;
    }
    void put()
    {
        int c;
        cout<<"value of a="<<a<<endl;
    }
};
int main()
{
    ABC aa;
    aa.get(10);
    aa.put();
    ABC*p;
    p=&aa;
    p->get(20);
    p->put();
    return 0;
}