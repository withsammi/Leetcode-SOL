class Solution {
public:
    int getLucky(string s, int k) {
    string number = "";
    
    // Step 1: Convert string s to the corresponding number string
    for (char c : s) {
        int pos = c - 'a' + 1;
        number += to_string(pos);
    }
    
    // Step 2: Perform k transformations
    int result = 0;
    for (int i = 0; i < k; ++i) {
        result = 0;
        for (char c : number) {
            result += c - '0';
        }
        number = to_string(result);
    }
    
    return result;
    }
};