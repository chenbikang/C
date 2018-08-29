#include<iostream>
using namespace std;
double line(double x)
{
	return 10*x+5;
}
double para(double x)
{
	return 2*x*x+4*x+7;//zi ding yi yi ge shi zi
}
double cal(double a,double b,double(*fun)(double),int n)
{
	double h = (b-a)/n;
	double s= ((*fun)(a)+(*fun)(b))/2;
	int i;
	for(i=1;i<n;i++)
		s +=(*fun)(a+i*h);
	s*=h;
	return s;
}
int main()
{
	int a,b;
	double(*fun)(double);
	cout<<"please int the left range\n";
	cin>>a;
	cout<<"please int the right range\n";
	cin>>b;
	fun=&line;
	cout<<"the result is\n"<<cal(a,b,fun,1000)<<"\n";
	fun=&para;
	cout<<"the result is\n"<<cal(a,b,fun,1000)<<"\n";
	return 0;
}
