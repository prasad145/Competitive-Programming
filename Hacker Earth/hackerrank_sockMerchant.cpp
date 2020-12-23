#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	list<int> l;
	int m;
	int pair=0;
	while(n--)
	{
		cin>>m;
		if(find(l.begin(),l.end(),m)!=l.end())
		{
			
			pair+=1;
			l.remove(m);
			l.remove(m);
			continue;
		}
		l.push_back(m);
	}
	cout<<pair<<endl;
	return 0;
}

