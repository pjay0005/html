#include<iostream.h>
#include<conio.h>
class a
{
   public:
   int rollno;
   void get()
   {
      cout<<"en :";
      cin>>rollno;
   }
   void put()
   {
     cout<<rollno;
   }
};
int main()
{

   int i,n;
   clrscr();
   a a1[20];
   cout<<"enter n: ";
   cin>>n;
   for(i=0; i<n; i++)
   {
       a1[i].get();
   }
   for(i=0; i<n; i++)
   {
     a1[i].put();
   }
   getch();
   return 0;
}