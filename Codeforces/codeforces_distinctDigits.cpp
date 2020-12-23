#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r,i,count=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
		set<int> s;
		int c=i;
		while(c!=0)
		{
			s.insert(c%10);
			c/=10;
			count++;
		}
		if(s.size()==count)
		{
			cout<<i<<endl;
		}
			
				
		
	}
	return 0;
}
