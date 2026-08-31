class Solution {
public:
    bool check(vector<int>&nums , int t , int n){
        int sum = 0 ; 
        for(int x : nums){
            if(x <= n) sum++;
            else{
                sum += (x / n);
                if(x % n) sum++;
            }
        }
        return sum <= t;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int h = *max_element(nums.begin() , nums.end());

        int ans = 0;
        while(l <= h){
            int mid = l + (h - l) / 2;
            if(check(nums,threshold , mid)){
                ans = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};