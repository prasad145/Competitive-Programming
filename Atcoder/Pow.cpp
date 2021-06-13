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

int binpow(int a, int b) {
    if (b == 0)
        return 1;
    int res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

void solve()
{
	int a, b, c;
	cin >> a >> b >> c;
	// cout << (c >> 1) << "\n";
	if(c % 2 == 0)
	{
		a = abs(a);
		b = abs(b);
	}
	// cout << a  << " " << b << '\n';
 	if(a < b)
	{
		cout << "<" << "\n";
	}
	else if(a > b)
	{
		cout << ">" << "\n";
	}
	else
	{
		cout << "=" << "\n";
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