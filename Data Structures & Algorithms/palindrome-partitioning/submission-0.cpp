class Solution {
public:
bool ispalindrome(string s,int left,int right){
    while(left<=right){
        if(s[left]!=s[right]){
            return false;
        }

        left++;
        right--;
    }

    return true;
}
void f(int idx,vector<string>&path,vector<vector<string>>&res,string s){
    if(idx==s.size()){
        res.push_back(path);
        return;
    }

    for(int i=idx;i<s.size();i++){
        if(ispalindrome(s,idx,i)){
            path.push_back(s.substr(idx,i-idx+1));
            f(i+1,path,res,s);
            path.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>path;
        f(0,path,res,s);

        return res;
    }
};
