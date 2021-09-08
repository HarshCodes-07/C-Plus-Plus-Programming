#include<iostream>
using namespace std;
void print(char c,int n){
	for(int i=1;i<=n;i++)
		cout<<c;
}
void print(char c){
	for(int i=1;i<=80;i++)
		cout<<c;
}
void print(int n){
	for(int i=1;i<=n;i++)
		cout<<"*";
}
void print(){
	for(int i=1;i<=80;i++)
		cout<<"*";
}
int main(){
	int x;
	cout<<"\nEnter 1 for Inputiing both char and number : ";
	cout<<"\nEnter 2 for Inputiing char but not number : ";
	cout<<"\nEnter 3 for Inputiing number but not char : ";
	cout<<"\nEnter 4 for Not Inputiing anything : \n";
	cin>>x;
	int n;
	char c;
	if(x==1){
		cout<<"\nEnter the char and n : ";
		cin>>c>>n;
		print(c,n);
	}
	if(x==2){
		cout<<"\nEnter the char : ";
		cin>>c;
		print(c);
	}
	if(x==3){
		cout<<"\nEnter the number : ";
		cin>>n;
		print(n);
	}
	if(x==4){
		print();
	}
}
