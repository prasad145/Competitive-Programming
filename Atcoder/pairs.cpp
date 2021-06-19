#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#define int long long int
using namespace std;
int32_t main()
{
	int n;
	cin >> n;

	unordered_map<int, int> freq;

	for(int i = 0; i < n; i++)
	{
		int e;
		cin >> e;
		freq[e]++;
	}
	n--;
	int tot = ((n) * (n + 1)) / 2;  
	// cout << tot << '\n';
	int rem = 0;
	for(auto x: freq)
	{
		if(x.second > 1)
		{
			rem += (((x.second) * (x.second - 1)) / 2);
		}
	} 
	// cout << rem << '\n';/
	cout << tot - rem << "\n";
	return 0;
}