#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	if(n == 1)
	{
		cout << 0 << "\n";
	}
	else
	{
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		set<int> cnt;
		int i = 0, j = n - 1;
		while(i < j)
		{
			if(a[i++] != a[j--])
			{	
				cnt.insert(a[i]);
				cnt.insert(a[j]);
			}	
		}

		cout << cnt.size() - 1 << '\n';
	}
	return 0;
}