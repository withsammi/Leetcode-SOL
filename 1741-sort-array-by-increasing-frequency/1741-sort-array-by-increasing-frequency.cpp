bool cmp(const pair<int, int>& a,const pair<int,int>& b){
    if(a.second == b.second){
        return a.first > b.first;
    }
    return a.second < b.second;
}
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> valFreq;
        for(auto m:mp){
            valFreq.push_back(m);
        }
        sort(valFreq.begin(),valFreq.end(),cmp);
        vector<int> res;
        for(auto v:valFreq){
            for(int i = 0;i<v.second;i++){
                res.push_back(v.first);
            }
        }
        return res;
    }
};