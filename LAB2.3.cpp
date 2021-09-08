#include <iostream>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    int marks[5];
};
int main()
{
    student s;
    float t=0,p;
    cout<<"\nEnter Name : ";
    cin>>s.name;
    cout<<"\nEnter ROLL : ";
    cin>>s.roll;
    cout<<"\nEnter 5 Marks : ";
    for(int i=0;i<5;i++)
     cin>>s.marks[i];
    cout<<s.name<<"\n"<<s.roll<<"\n";
    for(int i=0;i<5;i++)
    {
        t+=s.marks[i];
        cout<<s.marks[i]<<"\n";
    }
    cout<<"\nTotal Marks : "<<t<<"\n"<<"Average : "<<t/5;
    return 0;
}
