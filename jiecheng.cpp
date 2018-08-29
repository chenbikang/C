#include<iostream>
using namespace std;
int Mul(int a)
{
	int b;
	if(a<0)
		cout<<"a<0\n";
	else if (a==0)
		b=1;
	else
		b=Mul(a-1)*a;
	return b;
}
int main()
{
	int x;
	cout<<"please input x\n";
	cin>>x;
	cout<<x<<"!="<<Mul(x)<<"\n";
	return 0;
}