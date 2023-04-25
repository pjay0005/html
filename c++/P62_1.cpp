#include<iostream>
using namespace std;
class temp
{
    public:
    int x;
    void getdata(int n)
    {
        x=n;
    }
    void max(temp a,temp b)
    {
        if(a.x>b.x)
        {
            cout<<"b is min="<<b.x<<endl;
        }
        else
        {
            cout<<"a is min="<<a.x<<endl;
        }
    }
};
int main()
{
    temp a,b,c;
    a.getdata(10);
    b.getdata(20);
    c.max(a,b);
    return 0;
}
