#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[99][99];
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<6;j++)
		{
			cin>>a[i][j];
		}
	}
	//while(a[2][2]!=1)
	//{
		for(int i=1;i<6;i++)
		{
			for(int j=1;j<6;j++)
			{
				if(a[i][j]==1)
				{
					cout<<abs(3-i)+abs(3-j)<<endl;
				}
			}
		}
	//}
	return 0;
}

