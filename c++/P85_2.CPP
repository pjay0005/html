#include<iostream>
using namespace std;
class item
{
    public:
    int price,code;
    char itemname[10];
    void getdata()
    {
        cout<<"price = ";
        cin>>price;
        cout<<"code=";
        cin>>code;
        cout<<"item name = ";
        cin>>itemname;
    }
void putdata()
{
    cout<<"item name = "<<itemname<<endl;
    cout<<"code = "<<code<<endl;
    cout<<"price = "<<price<<endl;
}
};
int main()
{
    item a;
    item*p;
    p=&a;
    p->getdata();
    p->putdata();
    return 0;
}