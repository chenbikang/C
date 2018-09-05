#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c,d;
    cin>>a>>b>>c>>d;
	int i,j=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==a-1&&j==b-1)
			{
				cout<<setw(2)<<"#";
			}
			else if(i==a-1&&j==d-1)
			{
				cout<<setw(2)<<"#";
			}
			else if(i==a&&j>=b-2&&j<=b)
			{
				cout<<setw(2)<<"#";
			}
			else if(i==a&&j>=b+2&&j<=b+4)
			{
				cout<<setw(2)<<"#";
			}
				else if(i==a+1&&j>=b-3&&j<=b+5)
			{
				cout<<setw(2)<<"#";
			}
				else if(i==a+2&&j>=b-2&&j<=b+4)
			{
				cout<<setw(2)<<"#";
			}
				else if(i==a+3&&j>=b-1&&j<=b+3)
			{
				cout<<setw(2)<<"#";
			}
				else if(i==a+4&&j>=b&&j<=b+2)
			{
				cout<<setw(2)<<"#";
			}
				else if(i==a+5&&j==b+1)
			{
				cout<<setw(2)<<"#";
			}


			else cout<<setw(2)<<"_";
		}
		cout<<"\n";
	}
}


