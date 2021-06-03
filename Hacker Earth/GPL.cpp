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
		string s;
		cin >> s;
		int ind = 1, decimal = 0;
		for(int i = n - 1; i >= 0; i--)
		{
			if(s[i] == '1')
			{
				decimal += (ind);
			}
			ind *= 2;
		}
		cout << decimal <<  '\n';
	}
	return 0;
}