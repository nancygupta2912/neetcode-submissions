class Solution {
private:
    void CountingSort(vector<int>&nums){
        unordered_map<int,int>mpp;
        
        for(int n:nums){
            mpp[n]++;
        }

        int index=0;
        for(int i=0;i<=2;i++){
            while(mpp[i]>0){
                nums[index]=i;
                index++;
                mpp[i]--;
            }
        }
    }
public:
    void sortColors(vector<int>& nums) {
        CountingSort(nums);
    }
};