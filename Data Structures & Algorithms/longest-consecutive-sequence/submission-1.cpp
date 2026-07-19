class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());

        int max_len=1;
        int curr_len=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                curr_len++;
            }
            else{
                max_len=max(max_len,curr_len);
                curr_len=1;
            }
        }

        max_len=max(max_len,curr_len);
        return max_len;       
    }
};
