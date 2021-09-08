#include <iostream>
using namespace std;
class complex 
{
    public:
    int r,i;
};
int main()
{
    complex s[10];
    cout<<"\nEnter real and imaginary parts of 10 numbers : ";
    for(int i=0;i<10;i++)
    {
        cin>>s[i].r;
        cin>>s[i].i;
    }
    cout<<"\nComplex forms : ";
    for(int i=0;i<10;i++)
    {
        cout<<"\n"<<s[i].r<<" + i"<<s[i].i;
    }
    return 0;
}
