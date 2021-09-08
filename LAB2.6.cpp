#include  <iostream>
using namespace std;
class employee
{
    int id,age,sal;
    char name[100];
    public:
     void in()
     {
     	 cout<<"\nEnter name , ID , Age and Salary : ";
         scanf("%s",name);
         cin>>id>>age>>sal;
     }
     void calculate()
     {
         float da,hra;
         da=0.8*sal;
         hra=0.1*sal;
         cout<<sal+da+hra<<" ";
     }
     void show()
     {
         cout<<name<<" "<<age<<" "<<id<<"\n";
     }
};
int main()
{
    int n;
    cin>>n;
    employee e[n];
    for(int i=0;i<n;i++)
     e[i].in();
    for(int i=0;i<n;i++)
    {
        e[i].show();
        e[i].calculate();
    }
    return 0;
}
