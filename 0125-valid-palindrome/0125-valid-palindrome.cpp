class Solution {
public:
    bool isPalindrome(string s) {
        string filteredString;
        for(char c : s){
            if(isalnum(c)){
                filteredString += tolower(c);
            }
        }
        string temp = filteredString;
        reverse(temp.begin(),temp.end());
        return temp == filteredString;
    }
};