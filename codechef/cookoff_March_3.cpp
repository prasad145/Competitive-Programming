#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        for(int i = 1; i <= 1000; i++)
        {
            cout << i * i << endl; // neccessary endl to flush in interactive probelms
            int ans;
            cin >> ans;
            if(ans == 1)
                goto end;
        }
        end:
            continue;
        return 0;
    }
}