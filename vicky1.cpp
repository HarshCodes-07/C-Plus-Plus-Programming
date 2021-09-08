#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"\nEnter the size of the array : ";
	cin>>num;
	int*ptr=new int[num];
	cout<<"\nEnter "<<num<<" elements : \n";
	int c=0;
	for(int i=0;i<num;i++)
	{
		cin>>*(ptr+i);
		if(*(ptr+i)%5==0)
		{
			c++;	
		}
	}
	int*res=new int[c];
	int k=0;
	for(int i=0;i<num;i++){
		if(*(ptr+i)%5==0)
		{
			*(res+k++)=*(ptr+i);
		}
	}
	for(int i=0;i<c;i++){
		cout<<"\t"<<*(res+i);
	}
	delete []res;
//	delete []ptr;
	return 0;
}
