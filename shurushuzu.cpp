#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int* p=new int[];
    int i = 0;
	cin>>p[i++];
    while(getchar()!='\n')
    {
        cin>>p[i++];
    }
    for(int j=0;j<i;j++)
    {
        cout<<"a["<<j<<"]:"<<p[j]<<endl;
    }
}
