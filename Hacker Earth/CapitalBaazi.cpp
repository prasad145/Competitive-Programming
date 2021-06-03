#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == ' '){
			cout << endl;
		}
		else{
			char c = s[i];
			char cc = (char) (c - 32);
			cout << cc ;
		}
	}
	return 0;
}