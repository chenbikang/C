#include<iostream>
using namespace std;
class complex
{
private:
	double real;
	double image;
public:
	complex(double r=0,double i=0)
	{
		real=r;
		image=i;
	}
	friend complex operator *(complex c1,complex c2);
	void output();
};
complex operator *(complex c1,complex c2)
{
	return complex(c1.real*c2.real-c1.image*c2.image,c1.real*c2.image+c1.image*c2.real);
}

void complex::output()
{
	if (image<0.0)
	{
		cout<<"the result is\n"<<real<<image<<"i\n";
	}
	else if(image==-1)
	{
		cout<<"the result is\n"<<real<<"-"<<"i\n";
	}
	else if(image==1)
	{
		cout<<"the result is\n"<<real<<"+"<<"i\n";
	}
	else if(image==0)
	{
		cout<<"the result is\n"<<real<<"\n";
	}
	else
	{
		cout<<"the result is\n"<<real<<"+"<<image<<"i\n";
	}
}
int main()
{
	double x,y,m,n;
	cout<<"please input the first real and the first image"<<endl;
	cin>>x>>y;
	cout<<"please input the second real and the second image"<<endl;
	cin>>m>>n;
	complex a(x,y),b(m,n);
	complex c1;
	c1=a*b;
	c1.output();
	return 0;
}








