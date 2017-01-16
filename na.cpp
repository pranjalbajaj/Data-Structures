#include<iostream>
using namespace std;
class complex
{
	int real;
	int imag;
	public:
	void setdata(int r, int i)
	{
		real = r;
		imag = i;
		
	}
	
	   complex addcomplex(complex c)
	{
		complex temp;
		temp.real = real + c.real;
		temp.imag = imag+ c.imag;
		return (temp);

	}
	complex operator+(complex c)
	{
		complex temp;
		 temp.real = real + c.real;
                temp.imag = imag+ c.imag;
                return (temp);

	}
	void showdata()
	{	
		if(imag>0)
		cout<< real<<"+"<<imag<<"i"<<endl;
		else
		cout<<real<<imag<<"i"<<endl;
	}	
			
};

int main()
{
	complex c1,c2,c3;
	int x;
	int y;
	
	
		cout<<"Enter the real and imaginery value of complex number"<<endl;
		cin>>x>>y;
		c1.setdata(x,y);
		cout<<"Enter the real and imaginery value of complex number"<< endl;
		cin>>x>>y;
		c2.setdata(x,y);
		c3=c1.addcomplex(c2);
		
		cout<< "The result is"<< endl;
		c3.showdata();
		c3= c1.operator +(c2);
		cout<<"The result is"<< endl;
		c3.showdata();

		return 0;
}


	
