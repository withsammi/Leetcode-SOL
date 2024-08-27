class Solution {
public:
    int numJewelsInStones(string J, string S) {
       int count = 0;
       for(char c:S){
        if(J.find(c) != string::npos)
        count ++;
       }
       return count;

        
    }
};