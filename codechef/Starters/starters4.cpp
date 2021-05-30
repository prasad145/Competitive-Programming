#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, f;
        cin >> n >> k >> f;
        // int tot = 0;
        bool flag = false, ok = false;
        int j = 0;
        while(n--)
        { 
            int a, b;
            cin >> a >> b;
            
            if(!flag )
            {
                if((a - 0) <= k)
                {
                    ok = true;
                    flag = true;
                }
                j = b;
            }
            else
            {   
                if(b - j <= k )
                {
                    ok = true;
                }
                else if(f - b <= k)
                {

                }
            }
        }
    }
    return 0;
}