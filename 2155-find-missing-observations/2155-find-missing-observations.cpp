class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sum = accumulate(rolls.begin(), rolls.end(), 0);
        int req = (mean * (m+n)) - sum;
        if(req < n || req > 6*n){
            return {};
        }
        int baseVal = req / n;
        int rem = req % n;
        vector<int> res(n, baseVal);
        for (int i = 0; i < rem; i++) {
            res[i]++;
        }
        return res;
    }
};