class Solution {
public:
int f(int idx,vector<int>& coins,int amount){
    if(idx==0){
        if(amount%coins[0]==0){
            return amount/coins[0];
        }
        else{
            return 1e9;
        }
    }

    int notpick=0+f(idx-1,coins,amount);
    int pick=1e9;
    if(coins[idx]<=amount){
        pick=1+f(idx,coins,amount-coins[idx]);
    }

    return min(pick,notpick);
    
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int res= f(n-1,coins,amount);
        return res!=1e9?res:-1;
    }
};
