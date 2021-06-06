#include<bits/stdc++.h>
#define vec vector<int>
#define MOD 1000000007
#define int long long int
using namespace std;
/* MOD
	(a +  b) % c = ((a % c) + (b % c)) % c
	(a - b) % c = ((a % c) - (b % c)) % c
	(a * b) % c = ((a % c) * (b % c)) % c
*/

// Binary Exponentiation -> O(logn)
int binExp(int base, int power)
{
	int ans = 1;
	while(power > 0) //till base 0
	{
		if(power % 2) //if power is odd -> res will be res multiplied by base
		{
			ans = (ans * base) % MOD;
			power--;
		}
		else // if even, square the base and reduce power to half
		{
			base = (base * base) % MOD;
			power /= 2;
		}
	}
	return ans;
}

int32_t main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		if(a == 1)
		{
			cout << 1 << "\n"; 
		}
		else
		{
			int ans = (binExp(2, a) - 1);
			// cout << ans  << "\n";
			cout << binExp(ans, b)<< "\n";
		}
	}
	return 0;
}