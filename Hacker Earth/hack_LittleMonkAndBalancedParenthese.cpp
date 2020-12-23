#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	boost;
	ull t;
	cin>>t;
	stack<ull> st;
	int a[t];
	ull count=0;
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
		if(st.empty())
		{
			if(a[i]>0)
			{
				st.push(a[i]);
			}
		}
		else {
			if(a[i]<0)
			{
				int c=a[i]*(-1);
				//st.push(c);
			
				if(c==st.top())
				{
					st.pop();
					count=count+2;
				}
				else
				{
					st.push(c);
				}
		    }
		    else
		    {
		    	if(a[i]==st.top())
				{
					st.pop();
					count++;
				}
				else
				{
					st.push(a[i]);
				}
		    	
			}
		}
			
			
		
	}
	cout<<count<<endl;
	
	return 0;
}
