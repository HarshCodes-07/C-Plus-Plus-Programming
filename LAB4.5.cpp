#include<iostream>
using namespace std;
class book
{
    string name;
    string author;
    float price;
    public:
    void get_data()
    {
        cout<<"Enter name of the book"<<endl;
        getline(cin,name);
        cout<<"Enter name of the author"<<endl;
        getline(cin,author);
        cout<<"enter the price of the book"<<endl;
        cin>>price;
    }
    friend void output(book ss[],int n,int low,int high)
    { cout<<"Name\tAuthor\tPrice"<<endl;
       for(int i=0;i<n;i++)
       {
           if(ss[i].price>=low&&ss[i].price<=high)
           {
               cout<<ss[i].name<<"\t"<<ss[i].author<<"\t"<<ss[i].price<<endl;
           }
       }
    }

};
int main(){
	cout<<"Enter the no. of books "<<endl;
	int n;
  	cin>>n;
 	book ss[n];
 	for(int i=0;i<n;i++){
	 cin.get();
     ss[i].get_data();
 	}
 	int high,low;
 	cout<<"enter the range high and low"<<endl;
 	cin>>high>>low;
 	output(ss,n,low,high);
 	return 0;
}
