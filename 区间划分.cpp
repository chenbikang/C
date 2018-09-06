#include <iostream>
using namespace std;
int main()
{
	int n,k,t,i,j,l,q,m;
	int b=0;
	int c=0;
	cin>>n>>k>>t;
	int* a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(j=0;j+k<=n;j++)
	{
		for(l=j;l<j+k;l++)
		{
			q=a[l];
		
			for(m=j;m<j+k;m++)
			{
				if(a[m]==q)
				{
					b++;
				}
			}
		}
		if(b>=t)
		{
			c++;
		}
	}
	cout<<c<<"\n";
}





