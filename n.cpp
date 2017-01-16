#include<iostream>
using namespace std;
class  A
{

	int  value;
	public:
	A()
	{
		value = 1;
	}
  	void operator ++()
	{
		value = value+1;
		cout<< value<<endl;
	}
	void operator ++(int)
	{
		value=value+1;
		cout<<value<<endl;
	}
};

int main()
{
	A  obj;
	obj++;
	++obj;
	
	 
	return 0;
}
	
