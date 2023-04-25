#include<iostream>
using namespace std;
class ABC
{
    public:
    int a;
    ABC()
    {
        a=10;
    }
    void display(int a)
    {
        cout<<"argument of a="<<a<<endl;
        cout<<"data member of a="<<this->a<<endl;
    }
};
int main()
{
    ABC s;
    s.display(20);
    return 0;
}