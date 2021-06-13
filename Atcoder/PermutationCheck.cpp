#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
	int n;
	cin >> n;
	set<int> vis;
	bool ok = false;
	while(n--)
	{
		int e;
		cin >> e;
		if(vis.find(e) != vis.end())
		{
			ok = true;
		}
		else{
			vis.insert(e);
		}
	}
	if(!ok)
	{
		cout << "Yes" << "\n";
	}
	else{
		cout << "No" << '\n';
	}
	return 0;
}