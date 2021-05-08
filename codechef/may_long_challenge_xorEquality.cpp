#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int
#define st stack<ll>
#define v vector<ll>
#define s set<ull>
// #define p pair<ll,ll>
#define mp map<char,ll>
#define us unordered_set<ll>
#define pq priority_queue<ll>
#define q queue<ll>
#define pb push_back
#define forn(i,n) for(ll i=0;i<n;i++)
#define pf push_front
#define endl '\n'
#define MOD 10000007
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int power(ll x, ull y, int p)
{
    int res = 1; 
 
    x = x % p;
  
    if (x == 0) 
        return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res - 1;
}

int main()
{
    // boost;
    ll t;
    cin >> t;
    while(t--)
    {
        ull n;
        cin >> n; 
        int upperBound = power(2, n, MOD);
        // cout <<"-->" << upperBound <<  "\n";
        cout << ((upperBound % MOD / 2) + 1) % MOD << "\n";
    }
    return 0;
}