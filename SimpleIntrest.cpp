#include <iostream>
using namespace std;
class SI
{	
	static int P;
	static int R;
	static int T;
	public:
		static void SimpleIntrest()
		{
			cout<<(P*R*T)/100;
		}
};
int SI :: P = 1200;
int SI :: R = 10;
int SI :: T = 600;

int main()
{
	SI ob;
	ob.SimpleIntrest();	
	return 0;
}
