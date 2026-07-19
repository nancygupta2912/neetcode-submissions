class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        vector<vector<string>>res;

        for(string s:strs){

            string new_s=s;
            sort(new_s.begin(),new_s.end());
            mpp[new_s].push_back(s);
        }

        for(auto it=mpp.begin();it!=mpp.end();it++){
            res.push_back(it->second);
        }
        return res;
    }
};
