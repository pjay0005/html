#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[20];
    int cost;
    ofstream outf("file1.txt");
    cout<<"enter item name";
    cin>>name;
    outf<<name<<endl;
    cout<<"enter cost";
    cin>>cost;
    outf<<cost;
    outf.close();
    return 0;
}