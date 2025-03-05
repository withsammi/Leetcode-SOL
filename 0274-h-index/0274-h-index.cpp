class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int h = 0;
        sort(citations.rbegin(),citations.rend());
        for(int i=0; i<n; i++){
            if(citations[i] >= i+1){
                h++;
            }else{
                break;
            }
        }
        return h;
    }
};