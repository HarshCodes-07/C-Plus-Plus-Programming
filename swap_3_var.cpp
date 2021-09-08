// Swap two numbers using Adress
#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main(){
	int a=5,b=6;
	cout<<"BEFORE SWAPPING : \n";
	cout<<"a = "<<a;
	cout<<"\nb = "<<b;
	swap(&a,&b);
	cout<<"\nAFTER SWAPPING : ";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
}
//CALL BY ADDRESS
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
//CALL BY REFERENCE
//void swap(int &a,int &b){
//	int temp=a;
//	a=b;
//	b=temp;
//}
//CALL BY VALUE
//void swap(int a,int b){
//	int temp=a;
//	a=b;
//	b=temp;
//}

