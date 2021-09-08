// WAP in C++ to check a number is perfect or not
#include<iostream>
using namespace std;
int main() {
	int n,sum=0;
	cout<<"Enter the number to check for Perfect Number : - ";
	cin>>n;
	for(int i=1; i<n; i++) {
		if(n%i==0)
			sum+=i;
	}
	if(n==sum)
		cout<<"\nYES!"<<n<<" is an Perfect Number";
	else
		cout<<"\nNO ! "<<n<< " is an Perfect Number";
}
