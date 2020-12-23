#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string ,int> chefvotes;
	map<string,int> countryvotes;
	map<string,string> country;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		string chef,c;
		cin>>chef>>c;
		country[chef]=c;
	}
	
	string maxcountry,maxchef;
	int maxcountryvotes=0,maxchefvotes=0;
	for(int i=0;i<m;i++)
	{
		string chef;
		cin>>chef;
		chefvotes[chef]++;
		countryvotes[country[chef]]++;
		if(chefvotes[chef]>maxchefvotes)
		{
			maxchef=chef;
			maxchefvotes=chefvotes[chef];
		}
		else if(chefvotes[chef]==maxchefvotes)
		{
			maxchef=min(chef,maxchef);
		}
		if(countryvotes[country[chef]]>maxcountryvotes)
		{
			maxcountry=country[chef];
			maxcountryvotes=countryvotes[country[chef]];
		}
		else
		if(countryvotes[country[chef]]==maxcountryvotes)
		{
			maxcountry=min(country[chef],maxcountry);
		}
	}
	cout<<maxcountry<<endl;
	cout<<maxchef<<endl;
	return 0;
}
