class Solution {
private:
    void countingSort(vector<int>&nums){
        unordered_map<int,int>count;

        int minVal=*min_element(nums.begin(),nums.end());
        int maxVal=*max_element(nums.begin(),nums.end());

        for(int n:nums){
            count[n]++;
        }
        int index=0;
        for(int val=minVal ;val<=maxVal;val++){
            while(count[val]>0){
                nums[index]=val;
                index++;
                count[val]--;
            }
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        countingSort(nums);
        return nums;
    }
};