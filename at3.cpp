#include<bits/stdc++.h>
// #define vec vector<int>
#define MOD 10000007
#define int long long int
/* MOD
	(a +  b) % c = ((a % c) + (b % c)) % c
	(a - b) % c = ((a % c) - (b % c)) % c
	(a * b) % c = ((a % c) * (b % c)) % c
*/

// Binary Exponentiation -> O(logn)
int ModularExponentiation(int base, int power)
{
	int ans = 1;
	while(power) //till base 0
	{
		if(power % 2) //if power is odd -> res will be res multiplied by base
		{
			ans = (ans * base) % MOD;
			power--;
		}
		else // if even square the base and reduce power to half
		{
			ans = (base * base) % MOD;
			power /= 2;
		}
	}
	return ans;
}
using namespace std;
int32_t main()
{
	int n, m;
	cin >> n >> m;
	if(m == 0)
	{
		cout << n << "\n";
	}
	else
	{
		vector<pair<int,int>> chk;
		// vec fin;
		set<pair<int, int>> vis;
		while(m--)
		{
			int a, b;
			cin >> a >> b;
			vis.insert({a, b});
			chk.push_back({a, b});
		}
		sort(chk.begin(), chk.end());
		int cnt = n;
		for(int i = 0; i < chk.size(); i++)
		{
			for(int j = 1; j < chk.size(); j++)
			{
				if(chk[i].second == chk[j].first)
				{ 
					if(vis.find({chk[i].first,chk[j].second}) == vis.end())
					{
						if(vis.find({chk[j].second,chk[i].first}) == vis.end())
						{
							cout << chk[i].first << " " << chk[j].second << "\n";
							cnt += 1;
						}
					}
				}
			}
		}

		cout << vis.size() + cnt << "\n";
	}
	return 0;
}


// 13
// 14
// 24
// 31

