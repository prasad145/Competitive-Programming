#include<iostream>
#include<vector>
#include <cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> a;
        for(int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            bool stringOutBound = false;
            for(int j = 0; j < s.length(); j++)
            {
                char c = s[j]; 
                // cout << c << " ";
                if(((c >= 'a') && (c <= 'm')) || ((c >= 'N') && (c <= 'Z')))
                {
                    stringOutBound = false;
                    // cout << "bound\n";
                }
                else
                {
                    stringOutBound = true;
                    // cout << "outbound\n";
                    break;
                }
            }

            if(!stringOutBound)
            {
                // cout << "Enter" << "\n";
                string tmp = s;
                // cout << tmp <<"\n";
                if(islower(s[0]))
                {
                    transform(s.begin(), s.end(), s.begin(), ::tolower);
                    // cout << s <<"\n";
                    if(s == tmp){
                        // cout << s << " " << tmp ;
                        a.push_back(s);
                    }
                    // else{
                    //     cout << "not" << "\n";
                    // }
                }
                else
                {
                    transform(s.begin(), s.end(), s.begin(), ::toupper);
                    // cout << tmp <<"\n";
                    if(s == tmp){
                        // cout << s << " " << tmp ;
                        a.push_back(s);
                    }
                    // else{
                    //     cout << "not" << "\n";
                    // }
                }
            }
            
        }
        if(a.size() == n)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}