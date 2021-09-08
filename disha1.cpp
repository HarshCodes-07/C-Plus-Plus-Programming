#include<iostream>
using namespace std;
#define MAX 100

class book
{
private:
char name[60];
char author[30];
int price;

public:
void input()
{
cout<<"Enter the name, author and price of the book:\n";
cin>>name>>author>>price;
cout<<endl;
}

friend void display(book b[MAX], int n)
{
int range;
cout<<"Enter a price range to see the details of the book: ";
cin>>range;
cout<<endl;
cout<<"The details of the book in this range are:\n";
for(int i=0;i<n;i++)
if((b[i].price==range) || (b[i].price>range))
{
cout<<"Name: "<<b[i].name<<endl;
cout<<"Author: "<<b[i].author<<endl;
cout<<"Price: "<<b[i].price<<endl;
}
}
};

int main()
{
int num;
cout<<"Enter the no. of books you want to store details for: ";
cin>>num;
cout<<endl;
book b[num],ob;

for(int i=0;i<num;i++)
{
cout<<"BOOK NO. "<<i+1<<":"<<endl;
b[i].input();
}

display(b,num);
return 0;
}
