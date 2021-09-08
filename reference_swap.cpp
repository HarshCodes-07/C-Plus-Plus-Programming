// Swap two numbers using Reference
#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main(){
	int a=5,b=6;
	cout<<"BEFORE SWAPPING : \n";
	cout<<"a = "<<a;
	cout<<"\nb = "<<b;
	swap(a,b);
	cout<<"\nAFTER SWAPPING : ";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
}
void swap(int &x,int &y)
{
 int temp=x;
 x=y;
 y=temp;
}
