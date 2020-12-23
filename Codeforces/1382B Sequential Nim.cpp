#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int e;
		vector<int> play;
		priority_queue<int> chk;
		for(int i=0;i<n;i++)
		{
			cin>>e;
			play.emplace_back(e);
			chk.push(e);
		}
		if(chk.top()==1)
		{
			if(n%2==0)
			{
				cout<<"Second"<<endl;
			}
			else
			{
				cout<<"First"<<endl;
			}
		}
		else{
			for(int i=0;i<n;i++)
			{
				if(play[i]>1)
				{
					if(i%2==0)
					{
						cout<<"First"<<endl;
						break;
					}
					else
					{
						cout<<"Second"<<endl;
						break;
					}
				}
			}
		}


	}
	return 0;
}