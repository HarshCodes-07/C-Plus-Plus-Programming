#include<iostream>
using namespace std;
class Train{
	public :
	int no_of_seats_1;
	int no_of_seats_2;
	int no_of_seats_3;
	Train(){
	}
};
class Reservation:public Train{
	public:
		Reservation(int a,int b,int c){
				no_of_seats_1=a;
		no_of_seats_2=b;
		no_of_seats_3=c;
		}
		int no_of_booked_seats1=0;
		int no_of_booked_seats2=0;
		int no_of_booked_seats3=0;
		void book(){
			int n;
			cout<<"\nEnter seat number :";
			cin>>n;
			if(n==1){
				if(no_of_booked_seats1<no_of_seats_1){
					no_of_booked_seats1++;
					cout<<"\nSeat 1 Booked";
				}else{
					cout<<"\nSeat 1 FULL";
				}
			}else if(n==2){
					if(no_of_booked_seats2<no_of_seats_2){
					no_of_booked_seats2++;
					cout<<"\nSeat 2 Booked";
				}else{
					cout<<"\nSeat 2 FULL";
				}
			}else{
					if(no_of_booked_seats3<no_of_seats_3){
					no_of_booked_seats3++;
					cout<<"\nSeat 3 Booked";
				}else{
					cout<<"\nSeat 3 FULL";
				}
			}
		}
		void cancel(){
				int n;
			cout<<"\nEnter seat number :";
			cin>>n;
			if(n==1){
				no_of_booked_seats1--;
				if(no_of_booked_seats1<0)
				no_of_booked_seats1=0;
			}else if(n==2){
				no_of_booked_seats2--;
				if(no_of_booked_seats2<0)
				no_of_booked_seats2=0;
			}else{
				no_of_booked_seats3--;
				if(no_of_booked_seats3<0)
				no_of_booked_seats3=0;
			}
		}
};

main(){
	Reservation r(5,5,5);
	int ch;
	do{
		cout<<"\nEnter 1 to book :";
		cout<<"\nEnter 2 to cancel : ";
		cout<<"\nEneter 3 to exit : ";
		cin>>ch;
		switch (ch){
			case 1:
				r.book();
				break;
			case 2:
				r.cancel();
				break;
		}
	}
	while(ch!=3);
}

