#include <iostream>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    int marks;
};
int main()
{
    student s;
    cout<<"\nEnter Name : ";
    cin>>s.name;
    cout<<"\nEnter Roll and Marks : ";
    cin>>s.roll>>s.marks;
    cout<<"\nStudent Details : ";
    cout<<s.name<<"\n"<<s.roll<<"\n"<<s.marks<<"\n";
    return 0;
}
