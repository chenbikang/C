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
		a=b;
		Swap(a,b);
	}
	return b;
}
int main()
{
	int a,b;
	cout<<"���� a\n";
	cin>>a;
	cout<<"a �� "<<a<<'\n';
	cout<<"���� b\n";
	cin>>b;
	cout<<"b �� "<<b<<'\n';
	int Div(int a,int b);
	cout<<"���Լ��Ϊ"<<Div(a,b)<<'\n';
	return 0;
}