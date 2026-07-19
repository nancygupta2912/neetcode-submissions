class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int res=INT_MIN;

        int i,j=0;
        while(j<s.size()){
            mpp[s[j]]++;

            while(mpp[s[j]]>1){
                mpp[s[i]]--;
                i++;
            }

            res=max(res,j-i+1);
            j++;

        }

        return res!=INT_MIN?res:0;
    }
};
