#include<bits/stdc++.h>
// #define v vector<int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define rep(i, n) for(int i = 0; i < n; i++) 
#define MOD 10000007
#define int long long int
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


int solve()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (auto &x : arr)
	{
		cin >> x;
	}
	int maxi = 0;
	for(int i = 1; i <arr.size(); i++)
	{
		if(arr[i] < arr[i - 1])
		{
			maxi += (arr[i - 1] - arr[i]); 
			arr[i] = arr[i] + (arr[i - 1] - arr[i]);
		}
	}
	cout << maxi << "\n";
}

int32_t main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t = 1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}