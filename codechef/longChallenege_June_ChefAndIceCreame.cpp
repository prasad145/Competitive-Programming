#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a,i;
	cin>>t;
	while(t--)
	{
		vector<int> v;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		int fund=5,count5=1,count10=0,count15=0,flag=0;
		if(v[0]!=5)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			for(i=1;i<v.size();i++)
			{
				flag=0;
				if(v[i]>5)
				{
					if(v[i]==10)
					{
						count10++;
						if(fund<=0)
						{
							flag=1;
							break;
						}
						else
						{
							if(count5>=1)
							{
								fund+=(v[i]);
								fund-=5;
								count5--;
								
							}
							else
							{
								flag=1;break;
							}
						}
					}
					else
					{
						if(fund<=0)
						{
							flag=1;
							break;
						}
						else
						{
							if(count10>=1)
							{
								fund+=(v[i]);
								fund-=(v[i]-10);
								count10--;
							}
							else if(count5>=2)
							{
								fund+=(v[i]);
								fund-=(v[i]-10);
								count5-=2;
							}
							else
							{
								flag=1;
								break;
							}
						}

					}
				}
				else
				{
					count5++;
					fund+=v[i];
				}
			}
			if(flag==1)
				cout<<"NO"<<endl;
			else if(i==v.size())
				cout<<"YES"<<endl;
		}
		


	}
	return 0;
}