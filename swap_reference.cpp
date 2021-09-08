#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
 int t=a;
 a=b;
 b=t;
}
int main()
{
    int a,b;
    cout<<"\nEnter a and b : ";
    cin>>a>>b;
    swap(a,b);
    cout<<"\nAfter Swapping : ";
    cout<<a<<" "<<b;
    return 0;
}
