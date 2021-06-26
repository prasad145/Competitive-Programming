#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int cyan = a, red = 0, ans = 0;
	bool possible = false;
	for(int i = 1; i <= a; i++)
	{
		cyan += b;
		red += c;
		if(cyan <= (red * d))
		{
			cout << i << "\n";
			return 0;
		}
	}
	cout << - 1 << "\n";
	return 0;
}