class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int n:nums){
            mpp[n]++;
        }

        int res=nums[0];

        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second>mpp[res]){
                res=it->first;
            }
        }
        return res;
    }
};