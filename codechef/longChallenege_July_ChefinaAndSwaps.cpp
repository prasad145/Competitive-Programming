#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,e;
		cin>>n;
		vector<int> fromA,fromB;
		unordered_map<int,int> a_freq,b_freq;
		unordered_set<int> ele;
		unordered_set<int> :: iterator it;
		bool agalla_guru=false;
		int mini=INT_MAX;
		int i,j,lenA=0,lenB=0,cnt=0,cost=0,lessA,greatA,lessB,greatB;
		for(int i=0;i<n;i++)
		{
			cin>>e;
			a_freq[e]++;
			ele.insert(e);
		}
		for(int i=0;i<n;i++)
		{
			cin>>e;
			b_freq[e]++;
			ele.insert(e);
		}
		for(it=ele.begin();it!=ele.end();it++)
		{
			cnt=(a_freq[*it]+b_freq[*it]);
			if((a_freq[*it]+b_freq[*it])!=((cnt>>1)<<1))
			{
				agalla_guru=true;
				break;
			}

			if(mini> (*it))
			{
				mini= (*it);
			}

			if(a_freq[*it]<b_freq[*it])
			{
				for(int j=0;j<((b_freq[*it]-a_freq[*it])/2);j++)
				{
					fromB.push_back(*it);
					lenB+=1;
				}
			}
			else if(a_freq[*it]>b_freq[*it])
			{
				for(int j=0;j<((a_freq[*it]-b_freq[*it])/2);j++)
				{
					fromA.push_back(*it);
					lenA+=1;
				}
			}
		}
		if(lenA!=lenB)
		{
			agalla_guru=true;
		}

		if(agalla_guru)
		{
			cout<<-1<<endl;	
		}
		else{
		
			sort(fromA.begin(),fromA.end());
			sort(fromB.begin(),fromB.end());

			mini=mini*2;

			lessA=0,lessB=0;
			for(int i=0;i<fromA.size();i++)
			{
				if(fromA[i]>mini)
					break;
				else
					lessA+=1;
			}
			greatA=lenA-lessA;
			for(int i=0;i<fromB.size();i++)
			{
				if(fromB[i]>mini)
					break;
				else
					lessB+=1;
			}
			greatB=lenB-lessB;
		
		cost=0;
		if(lessA<=greatB)
		{
			for(int i=0;i<lessA;i++)
			{
				cost+=fromA[i];
			}

			for(int i=0;i<lessB;i++)
			{
				cost+=fromB[i];
			}

			cost+=(mini * (greatA - lessB));
		}
		else
		{
			for(int i=0;i<greatB;i++)
			{
				cost+=fromA[i];
			}

			for(int i=0;i<greatA;i++)
			{
				cost+=fromB[i];
			}

			i= greatB;
			j= greatA;

			for(int k=0;k<(lessB-greatA);k++)
			{
				if(fromA[i]<fromB[j])
				{
					cost+=fromA[i];
					i++;
				}
				else
				{
					cost+=fromB[j];
					j++;
				}
			}
		
		}
		cout<<cost<<endl;
		}	
	}

		
	return 0;
}
