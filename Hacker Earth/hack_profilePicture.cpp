#include<iostream>
using namespace std;
int main()
{
	int l,w,h,t,n;
	cin>>l;
	cin>>n;
	while(n--)
	{
		cin>>w>>h;
		if(w<l||h<l) 
			cout<<"UPLOAD ANOTHER\n";
		else
		{
			if(w==h) 
				cout<<"ACCEPTED\n";
			else
			if(h>l || w>l)
				cout<<"CROP IT\n";
		}

}
		return 0;
}
