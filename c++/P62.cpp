#include<iostream>
using namespace std;
class temp
{
    public:
    int n;
    void getdata()
    {
        cout<<"enter n=";
        cin>>n;
    }
    void max(temp a,temp b)
    {
        if(a.n>b.n)
        {
            cout<<"b is min"<<b.n<<endl;
        }
        else
        {
            cout<<"a is min"<<a.n<<endl;
        }
    }
};
int main()
{
    temp t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.max(t1,t2);
    return 0;
}
