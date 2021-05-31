#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, e;
        cin >> n >> k;
        vector<int> v(n);
        // for(int i = 0; i < n; i++)
        // {
        //     cin >> v[i];
        // }
        string s;
        cin >> s;
        int tot = 0;
        for(int i = 1; i < s.length(); i++)
        {
            if(s[i] == '1'){
                if(s[i - 1] == '0'){
                    tot += 1;
                }
                else{
                    tot += 2;
                }
            }
            else{
                if(s[i - 1] == '1'){
                    tot += 1;
                }
                else{
                    tot += 2;
                }
            }
            
        }

        // if(s[s.length() - 1] == '1'){
        //     if(s[s.length() - 2] == '0')
        //     {
        //         tot += 1;
        //     } 
        //     else{
        //         tot += 2;
        //     }
        // }

        while(k--)
        {
            int ind;
            cin >> ind;
            int tmp1 = 0, tmp2 = 0;
            if(s[ind - 1] == '0' && ((ind - 1) >= 0))
            {
                if(ind - 2 >= 0){
                    if(s[ind - 2] == '1')
                    {
                        tmp1  += 1;
                        tmp2 += 2;
                    }
                    else
                    {
                        tmp1  += 2;
                        tmp2 += 1;
                    }
                }
                if(ind <= (s.length() - 1))
                {
                    if(s[ind] == '1')
                    {
                        tmp1  += 1;
                        tmp2 += 2;   
                    }
                    else
                    {
                        tmp1  += 2;
                        tmp2 += 1;
                    }
                }
                s[ind - 1] = '1';
                tot -= (tmp1);
                tot += tmp2;
                // cout << s << "\n";
                cout << tot << "\n";
                
            }
            else if(s[ind - 1] == '1' && ((ind - 1) >= 0))
            {
                if(ind - 2 >= 0){
                    if(s[ind - 2] == '0')
                    {
                        tmp1  += 1;
                        tmp2 += 2;
                    }
                    else{
                        tmp1  += 2;
                        tmp2 += 1;
                    }
                }

                if(ind <= (s.length() - 1)){
                    if(s[ind] == '0')
                    {
                        tmp1  += 1;
                        tmp2 += 2;   
                    }
                    else
                    {
                        tmp1  += 2;
                        tmp2 += 1;
                    }
                }
            
                s[ind - 1] = '0';

                tot -= (tmp1);
                tot += tmp2;
                // cout << s << "\n";
                cout << tot << "\n";
            }
        }
    }
    return 0;
}