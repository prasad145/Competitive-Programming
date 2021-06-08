#include<bits/stdc++.h>
// #define v vector<int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define rep(i, n) for(int i = 0; i < n; i++) 
#define MOD 10000007
// #define int long long int
using namespace std;
 
/* author: Prasad 
 
Ascii reference:
	A - 65 ~~ Z - 90
	a - 97 ~~ z - 122
	char c = 'A' + 32; c stores 'a'
 
Modular Arithmetic :
	(a +  b) % c = ((a % c) + (b % c)) % c
	(a - b) % c = ((a % c) - (b % c)) % c
	(a * b) % c = ((a % c) * (b % c)) % c
 
Binary Exponentiation -> O(logn) */
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
 
 
void solve()
{
	string s;
	cin >> s;
	deque<char> track;
	int maxi = 1;
 
	track.pb(s[0]);
	for(int i = 1; i < s.length(); i++)
	{
		if(track.front() != s[i])
		{
			// cout << track.front() << " " << s[i] << "\n";
			if(maxi < track.size())
			{
				maxi = track.size();
 
			}
			track.clear();
			// while(!track.empty())
			// {
			// 	cout << track.front() << " ";
			// 	track.pop_front();
			// }
			// cout << '\n';
			track.push_front(s[i]);
		}
		else
		{
			track.push_front(s[i]);
		}
	}
	
	if(maxi <= track.size())
	{
		maxi = track.size();
	}

	if(maxi == 1)
	{
		cout << track.size() << "\n";
	}
	else
	{
		cout << maxi << "\n";
	}
}
 
int32_t main()
{
	int t = 1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}