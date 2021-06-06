#include<bits/stdc++.h>
#define vec vector<int>
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
	int x, y;
	cin >> x >> y;
	if(x == y)
	{
		cout << x << "\n";
	}
	else 
	{
		if(x == 0)
		{
			if(y == 1)
			{
				cout << 2 << "\n";
			}
			else
			{
				cout << 1 << "\n";
			}
		}
		else if(x == 1)
		{
			if(y == 0)
			{
				cout << 2 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else
		{
			if(y == 1)
			{
				cout << 0 << "\n";
			}
			else
			{
				cout << 1 << "\n";
			}
		}
	}

	return 0;
}