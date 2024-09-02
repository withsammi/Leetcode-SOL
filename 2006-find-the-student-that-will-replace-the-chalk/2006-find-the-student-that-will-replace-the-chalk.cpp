class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size() ;
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += chalk[i];
        }
        long long remSum = (k % sum);
        for(int j=0; j<n; j++){
            remSum -= chalk[j];
            if(remSum < 0){
                return j;
            }
        }
        return -1;
    }
};