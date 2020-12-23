#include<bits/stdc++.h>
using namespace std;
int main()
{
	/* code */
	
	long long int ts,js=2,count;
	long long int t;
	cin>>t;

	while(t--)
	{
		cin>>ts;
		if(ts%2==0)
			ts/=2;
		while(ts%2==0)
		{
			ts/=2;
		}
		//cout<<ts<<endl;
		
		cout<<ts/2<<endl;
	}
		
		return 0;

}