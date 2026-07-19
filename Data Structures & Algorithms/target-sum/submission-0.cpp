class Solution {
public:

int f(int idx,vector<int>& nums, int target,int sum,int offset){
    if(idx==0){
        int ways=0;
        if(sum+nums[idx]==target) ways++;
        if(sum-nums[idx]==target) ways++;

        return ways;
    }

    int add=f(idx-1,nums,target,sum+nums[idx],offset);
    int sub=f(idx-1,nums,target,sum-nums[idx],offset);

    return add+sub;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int total_sum=0;
        for(int i:nums) total_sum+=i;


        return f(n-1,nums,target,0,total_sum);
    }
};
