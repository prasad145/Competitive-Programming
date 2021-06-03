#include<iostream>
#define int long long int
using namespace std;
int32_t main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int prod = 1;
		while(n--)
		{
			int e;
			cin >> e;
			prod *= e;
		}
		cout << prod << "\n";
		if((prod % 10 == 2) or (prod % 10 == 3) or (prod % 10 == 5))
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