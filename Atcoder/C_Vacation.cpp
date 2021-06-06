#include<iostream>
#include<cstring>
using namespace std;
int a[100005][4];
int dp[100005][4];
int n;

int solve(int ind, int flag)
{
    int maxi = 0;
    if(ind == n) return 0;

    if(dp[ind][flag] != -1) return dp[ind][flag];

    if(flag == 0){
        maxi = max(maxi, a[ind][1] + solve(ind + 1, 1));
        maxi = max(maxi, a[ind][2] + solve(ind + 1, 2));
        maxi = max(maxi, a[ind][3] + solve(ind + 1, 3));
    }
    else if(flag == 1){
        maxi = max(maxi, a[ind][2] + solve(ind + 1, 2));
        maxi = max(maxi, a[ind][3] + solve(ind + 1, 3));
    }
    else if(flag == 2){
        maxi = max(maxi, a[ind][1] + solve(ind + 1, 1));
        maxi = max(maxi, a[ind][3] + solve(ind + 1, 3));
    }
    else{
        maxi = max(maxi, a[ind][1] + solve(ind + 1, 1)); 
        maxi = max(maxi, a[ind][2] + solve(ind + 1, 2)); 
    }
    
    return dp[ind][flag] = maxi; 
    return dp[ind][flag]; 
}

int main()
{
    cin >> n;

    memset(dp, -1, sizeof(dp));

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << solve(0, 0) << "\n";

    return 0;
}