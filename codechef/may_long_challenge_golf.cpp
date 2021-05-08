#include<bits/stdc++.h>
#define int long long int
#define ull unsigned long long 
#define st stack<ll>
#define v vector<ll>
#define s set<int>
#define p pair<ll,ll>
#define mp map<char,ll>
#define us unordered_set<ll>
#define pq priority_queue<ll>
#define q queue<ll>
#define pb push_back
#define forn(i,n) for(ll i=0;i<n;i++)
#define pf push_front
#define endl '\n'
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int32_t main()
{
    boost;
    int t;
    cin >> t;
    while(t--)
    {
        int n, x , k;
        cin >> n >> x >> k;
        // s muls;
        int i = 0, j = n + 1;
        bool ok = false, another = false;
        // muls.insert(0);
        if(((n + 1) % k) == 0)
        {
              if(x % k == 0)
              {
                  ok = true;
              }
        }
        else
        {
            if(x % k == 0)
            {
                ok = true;
            }

            if(((n + 1) - x) % k == 0){
                ok = true;
            }
        
        }        
        if(ok)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}