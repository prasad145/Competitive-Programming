#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >>  t;
	while(t--)
	{
		int n;
		cin >> n;
		int ordinary = 0;
		for(int i = 1 ; i <= n; i = i * 10 + 1)
		{
			for(int j = 1; j <= 9; j++)
			{
				if(i * j <= n)
				{
					ordinary += 1;
				}
			}
		}
		cout << ordinary << "\n";
	}
	return 0;
}