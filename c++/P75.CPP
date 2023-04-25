#include<iostream>
using namespace std;
class person
{
    public:
    int code,salary,experince;
    char name[10];
    void get()
    {
        cout<<"name=";
        cin>>name;
        cout<<"code=";
        cin>>code;
    }
};
class account: virtual public person
{
    public:
    void calculate()
    {
        cout<<"salary=";
        cin>>salary;
    }
};
class admin:virtual public person
{
    public:
    void putdata()
    {
        cout<<"experince=";
        cin>>experince;
    }
};
class information:public account,public admin
{
    public:
    void display()
    {
        cout<<"code="<<code<<endl;
        cout<<"name="<<name<<endl;
        cout<<"salary="<<salary<<endl;
        cout<<"experince"<<experince;
    }
};
int main()
{
    information ii;
    ii.get();
    ii.calculate();
    ii.putdata();
    ii.display();
    return 0;
}