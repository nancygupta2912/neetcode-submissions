class Solution {
public:
int f(int idx,vector<int>& coins,int amount,vector<vector<int>>&dp){
    if(idx==0){
        return amount%coins[idx]==0;
    }

    if(dp[idx][amount]!=-1) return dp[idx][amount];

    int notpick=f(idx-1,coins,amount,dp);
    int pick=0;
    if(coins[idx]<=amount){
        pick=f(idx,coins,amount-coins[idx],dp);
    }

    return dp[idx][amount]= pick+notpick;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return f(n-1,coins,amount,dp);
    }
};
