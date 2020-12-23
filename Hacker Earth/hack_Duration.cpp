#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		int shh,smm,ehh,emm;
		cin>>shh>>smm>>ehh>>emm;
		
		if(emm>=smm)
		{
			cout<<ehh-shh<<" "<<emm-smm<<endl;
		}
		else
		{
			cout<<ehh-shh-1<<" "<<60-smm+emm<<endl;
		}
		
	}
	return 0;
}
