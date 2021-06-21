#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    std::vector<int> a(n);
    for(auto& x: a)
    {
        cin >> x;
    }
    
    sort(a.begin(), a.end());
    while(q--)
    {
        int qq;
        cin >> qq;
        vector<int> :: iterator it;
        it = lower_bound(a.begin(), a.end(), qq);
        if(*it == qq)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << (((it - a.begin()) % 2) ? "NEGATIVE" : "POSITIVE") << '\n';
        }
    }
    return 0;
}