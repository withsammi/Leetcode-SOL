class Solution {
public:
    void reverseString(vector<char>& s) {
        // int cnt = 0;
        // vector<char> temp;
        int n = s.size();
        // for(int i=n-1;i>=0;i--){
        //     temp.push_back(s[i]);
        // }
        // s = temp;
        // int st=0;
        // int e=n-1;
        // while(st<=e){
        //     swap(s[e],s[st]);
        //     st++;
        //     e--;
        // }
        for(int i=0; i<n/2; i++){
            swap(s[i],s[n-i-1]);
        }
    }
};