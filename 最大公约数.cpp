#include <iostream>
using namespace std;
void Swap(int& a,int& b)
{
	if(a<b)
	{
		int t=a;
		a=b;
		b=t;
	}
}
int Div(int a,int b)
{
	Swap(a,b);
	while(a%b!=0)
	{
		b=a%b;
		Swap(a,b);
	}
	return b;
}
int main()
{
	int a,b;
	cout<<"输入 a\n";
	cin>>a;
	cout<<"a 是 "<<a<<'\n';
	cout<<"输入 b\n";
	cin>>b;
	cout<<"b 是 "<<b<<'\n';
	int Div(int a,int b);
	cout<<"最大公约数为"<<Div(a,b)<<'\n';
	return 0;
}
