#include<iostream>
using namespace std;
class test
{
    public:
    int a;
    void get(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"a="<<a;
    }
    test operator ++();
};
test test::operator ++()
{
    test t;
    t.a=++a;
    return t;
}
int main()
{
    test t1;
    t1.get(5);
    t1.display();
    ++t1;
    cout<<" after increment ";
    t1.display();
    return 0;
}