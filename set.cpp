#include<iostream>
using namespace std;
template<class T1,class T2>
void show(T1 a1[3],T2 a2[3]){
	int u[6];
	int i;
	int n=3,m=3;
	  int  k=0;
    for(i=0;i<n;++i){
        u[k]=a1[i];
        k++;
    }
 int flag=0,j;
    for(i=0;i<m;++i){
        flag=1;
        for(j=0;j<n;++j){
            if(a2[i]==a1[j]){
                flag=0;
                break;
            }
        }
 
        if(flag){
            u[k]=a2[i];
            k++;
        }
    }
    cout<<"\nUnion of two arrays is :: \n\n";
    for(i=0;i<k;++i)
    {
        cout<<u[i]<<"  ";
    }
 
    cout<<"\n";
		}
int main(){
	int i[3];
	int f[3];
	cout<<"\nEnter 3 values first array :";
	for(int j=0;j<3;j++){
		cin>>i[j];
	}
	cout<<"\nEnter 3 values second array :";
	for(int j=0;j<3;j++){
		cin>>f[j];
	}
		show(i,f);
 	return 0;
}
