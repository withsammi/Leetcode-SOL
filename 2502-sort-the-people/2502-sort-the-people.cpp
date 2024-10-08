class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        map<int,string> mp;
        for(int i = 0;i<n.size();i++){
            mp[h[i]]=n[i];
        }
        sort(h.begin(),h.end(),greater<int>());
        vector<string> ans;

        for(int i = 0;i<h.size();i++){
            ans.push_back(mp[h[i]]);
        }

        return ans;
    }
};