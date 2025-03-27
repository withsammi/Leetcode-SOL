class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for(char ch : s){
            if(isalnum(ch)){
                result += tolower(ch);
            }
        }
        int n = result.size();
        for(int i=0; i<n/2; i++){
            if(result[i]!=result[n-i-1]){
                return false;
            }
        }
        return true;
    }
};