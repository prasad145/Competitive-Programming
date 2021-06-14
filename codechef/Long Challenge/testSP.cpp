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
int ModularExponentiation(int x, int y)
{
	int res = 1; 
    x = x % MOD; // Update x if it is more than or equal to p
    if(x == 0) 
    	return 0; // In case x is divisible by p;
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % MOD;
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % MOD;
    }
    return res;
}

int solve()
{
	int n, m;
	cin >> n >> m;
	std::vector<int> a(n), b(m);
	unordered_map<int, int> dist;
	int inf = INT_MAX;
	rep(i, n)
	{
		cin >> a[i];
	}

	rep(j, m)
	{
		cin >> b[j];
	}

	for(int i = 0; i <a.size(); i++)
	{
		if(i == 0)
		{
			dist[i] = 0;
		}
		else if(a[i] != 0)
		{
			dist[i] = 0;
		}
		else
		{
			dist[i] = inf;
		}
	}

	//find distance for all right moving trains
	int distRight = -1;
	for(int i = 0; i < n; i++)
	{	
		if(a[i] == 1)
		{
			distRight = i;
		}
		if(distRight != -1)
		{
			if(a[i] == 0)
			{
				dist[i] = min(dist[i], i - distRight);
			}
		}
	}
	// cout << '\n';
	int distLeft = -1;
	for(int i = n - 1; i >= 0; i--)
	{
		if(a[i] == 2)
			distLeft = i;
		if(distLeft != -1)
		{
			if(a[i] == 0)
			{
				dist[i] = min(dist[i], distLeft - i);
			}
		}
	} 

	//query
	for(int i = 0; i < m; i++)
	{
		if(dist[b[i] - 1] != inf)
		{
			cout << dist[b[i] - 1] << ' ';
		}
		else
		{
			cout << -1 << " ";
		}

	}
	cout << "\n";
}	

int32_t main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}