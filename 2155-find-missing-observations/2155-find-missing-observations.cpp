class Solution {
public:

    void fun2(int n,int req,vector<int>&res){
        int baseVal = req / n;
        int rem = req % n;
        res.assign(n, baseVal);
        for (int i = 0; i < rem; i++) {
            res[i]++;
        }
    }
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sum = accumulate(rolls.begin(), rolls.end(), 0);
        int req = (mean * (m+n)) - sum;
        if(req < n || req > 6*n){
            return {};
        }
        vector<int> res;
        fun2(n,req,res);
        return res;
    }
};