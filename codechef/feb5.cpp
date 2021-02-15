#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<map>
#include<utility>
using namespace std;
int solve(vector<char> a, vector<char> b)
{
    set<char> s;
    for (int i = 0; i < a.size(); i++)
    {
        s.insert(a[i]);
    }

 /*   for (auto x : s)
    {
        cout << x << " ";
    }
*
    cout << '\n';
*/
    int ans = 0;
    for (auto i : b)
    {
        if (s.find(i) != s.end())
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, vector<char>> freq;
        map<string, vector<char>>::iterator it1, it2;
        string s;

        while (n--)
        {
            cin >> s;
            freq[s.substr(1)].push_back(s[0]);
            //   cout << s.substr(1) << " ";
        }

        // cout << "\n";

     /*   for (it1 = freq.begin(); it1 != freq.end(); it1++)
        {
            //cout << "Key : " << it->first << "  ";
            for (char x : (it1->second))
            {
 //               cout << "Values : ";
   //             cout << x << " ";
            }
            cout << "\n";
        }
    */
    //    cout << "\n";

        int out = 0;
        for (it1 = freq.begin(); it1 != freq.end(); it1++)
        {
            for (it2 = freq.begin(); it2 != freq.end(); it2++)
            {
                if (it1->first != it2->first)
                {
                    int cal = solve(it1->second, it2->second);
                    out += ((it1->second.size() - cal) * (it2->second.size() - cal));
                }
            }
        }
        cout << out << "\n";
    }
}