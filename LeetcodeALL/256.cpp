//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minCost(vector<vector<int>> &costs)
    {
        int n = costs.size();
        int dp[n+1][3];
        memset(dp,0,sizeof(dp));
        dp[0][0]=costs[0][0];dp[0][1]=costs[0][1];dp[0][2]=costs[0][2];
        for(int i=1;i<n;i++)
        {
            dp[i][0]=min(dp[i-1][1]+costs[i][0],dp[i-1][2]+costs[i][0]);cout<<dp[i][0]<<endl;
            dp[i][1]=min(dp[i-1][0]+costs[i][1],dp[i-1][2]+costs[i][1]);cout<<dp[i][1]<<endl;
            dp[i][2]=min(dp[i-1][0]+costs[i][2],dp[i-1][1]+costs[i][2]);cout<<dp[i][2]<<endl;
        }
         return min(min(dp[n-1][0],dp[n-1][1]),dp[n-1][2]);
    }   
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}