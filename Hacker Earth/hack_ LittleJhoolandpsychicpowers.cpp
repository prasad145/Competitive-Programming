#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int count=1;
	for(int i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
			if(count>=6)
			{
				cout<<"Sorry, sorry!"<<endl;
				break;
			}
		}
		else
		{
			count=1;
		}
		
	}
	if(count<6)
		{
			cout<<"Good luck!"<<endl;
		}
	return 0;

}
