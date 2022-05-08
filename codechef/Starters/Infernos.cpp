#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int single = 0, multiple = 0;
        for(int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            if(multiple < e)
            {
                multiple = e;
            }
            if(e <= x)
            {
                single++;
            }
            else
            {
                if(e % x == 0)
                {
                    single += (e / x);
                }
                else
                {
                    single += ((e / x) + 1) ;
                }
            }
        }
        cout << min(single, multiple) << "\n";
    }
    return 0;
}
