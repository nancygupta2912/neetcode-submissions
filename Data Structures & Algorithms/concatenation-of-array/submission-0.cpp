class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>res;
        for(int n:nums){
            res.push_back(n);
        }
        for(int n:nums){
            res.push_back(n);
        }
        return res;
    }
};