#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int D, d, p, q;
		cin >> D >> d >> p >> q;
		
		int days = D / d;
		int remDays = D % d;
		int heist = 0;
		int tmp = days - 1;
		
		heist = (days * p) + ((((tmp)*(tmp + 1))/2) * q);
		heist *= d;
		
		if(remDays >= 1)
		{
			heist += ((p + ((days) * q)) * remDays);
		}
		cout << heist << "\n";
	}
	return 0;
}