#include<bits/stdc++.h>
using namespace std;
signed main()
{
	int t,n;
	cin>>t;

	while(t--)
	{
		cin>>n;
		int *arr = (int *)malloc(n * n * sizeof(int)); 
		int cnt=0;
		if(n%2!=0)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cnt++;
					*(arr + i*n + j) = cnt; 
					
					cout<<*(arr + i*n + j)<<" ";
				}

			cout<<endl;
			}
		}
		else
		{
			int two=2,prev;

			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(i%2==0)
					{
						cnt++;
						*(arr + i*n + j) = cnt; 
						
						cout<<*(arr + i*n + j)<<" ";
					}
					else
					{
						
						if(j%2==0)
						{

							*(arr + i*n + j) = (cnt)+two;
							//cnt++;
							prev=*(arr + i*n + j) ;
							cout<<*(arr + i*n + j)<<" ";
							//two++;
						}
						else
						{
							cnt=prev;
							*(arr + i*n + j) =prev-1;
							
							cout<<*(arr + i*n + j)<<" ";

						}
					}

				}

			cout<<endl;
			}
		}
		free(arr);
	}
}