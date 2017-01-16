#include<iostream>
using namespace std;
class time1
{ 	
	int a,b;
	public:
		time1()
		{
		}
		time1(int x)
                  
	       {

			a=x/60;
			b=x%60;
			cout<<"The time is"<<endl<<a<<"hours"<<b<<"minutes"<<endl;
	       	}
			
};
int main()
{	
	
	int duration=70;
	
	time1 t1;
      time1 t1=duration;
return 0;
}
