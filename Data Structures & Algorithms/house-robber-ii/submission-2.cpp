class Solution {
public:
int f(int idx,vector<int>& nums,vector<int>&dp){
    if(idx==0) return nums[idx];
    if(idx<0) return 0;
    if(dp[idx]!=-1) return dp[idx];

    int notpick=f(idx-1,nums,dp);
    int pick=nums[idx]+f(idx-2,nums,dp);
    return dp[idx]= max(pick,notpick);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        vector<int>arr1,arr2;
        for(int i=0;i<n-1;i++){
            arr1.push_back(nums[i]);
        }
        for(int i=1;i<n;i++){
            arr2.push_back(nums[i]);
        }
        return max(f(arr1.size()-1,arr1,dp1),f(arr2.size()-1,arr2,dp2));
    }
};
