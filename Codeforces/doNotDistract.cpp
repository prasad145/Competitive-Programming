#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		stack<char> every;
		map<char, int> freq;
		bool ok = false;
		if(every.empty())
		{
			every.push(s[0]);
			freq[s[0]]++;
			// cout << every.top() << "\n";
		} 
			// cout << "entered else" <<"\n";
			for(int i = 1; i < n; i++)
			{
				// cout << every.top() << "\n";
				if(s[i] != every.top())
				{
					// cout <<  "entered" <<"\n";
					if(freq[s[i]] >= 1)
					{
						// cout << "Already" <<"\n";
						ok = true;
						break;
					}
					else
					{
						every.push(s[i]);
						freq[s[i]]++;
					}
				}
				else
					continue;
			}
		if(ok)
		{
			cout << "NO" << "\n";
		}
		else
		{
			cout << "YES" << "\n";
		}
	}
	return 0;
}

// aaba
// AABBCCDDEEBZZ
// vis = {a, b, c, d, e, }
// between = {a, b, c, d, e}