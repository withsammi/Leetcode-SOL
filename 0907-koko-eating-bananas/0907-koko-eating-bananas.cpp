class Solution {
public:
    int maxEl(vector<int>& piles){
        int maxi = INT_MIN;
        int n = piles.size();
        for(int i=0; i<n; i++){
            maxi = max(maxi,piles[i]);
        }
        return maxi;
    }
    long long totalHours(vector<int>& piles, int mid){
        long long totalHour = 0;
        int n = piles.size();
        for(int i=0; i<n; i++){
            totalHour += ceil((double)piles[i]/(double)mid);
        }
        return totalHour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxEl(piles);
        while(low<=high){
            int mid = low + (high - low) / 2;
            long long totalHour = totalHours(piles,mid);
            if(totalHour <= h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};