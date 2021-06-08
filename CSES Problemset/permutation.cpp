#include<bits/stdc++.h>
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


void solve()
{
	int n;
	cin >> n;
	string right = "", left = " ";
	if(n >= 2 and n <= 3)
	{
		cout << "NO SOLUTION" << "\n";
	}
	else
	{
		if(n == 4)
		{
			cout << "2 4 1 3";
		}
		else
		{
			cout << 1 ;
			for(int i = 3; i <= n; i += 2)
			{
				cout <<" " << i; 
			}
			for(int i = 2; i <= n; i+= 2)
			{
				cout <<" " << i;
			}
			cout << '\n';
		}
	}
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