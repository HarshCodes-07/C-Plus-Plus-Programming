#include<iostream>
using namespace std;
int inc(int n){
 	return ++n;
}
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<inc(n);
    return 0;
}
