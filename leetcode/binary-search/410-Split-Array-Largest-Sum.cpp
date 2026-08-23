class Solution {
public:
    bool check(vector<int>nums, int k, int mid){
        int cursum = 0;
        int count = 1;
        for(auto x : nums){
            if((cursum + x) > mid){
                count++;
                cursum = x;
            }
            else{
                cursum += x;
            }
        }
        return count <=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin() , nums.end());
        int high = accumulate(nums.begin() , nums.end() ,0);
        int ans = 0;
        while(low <= high){
            int mid = low + (high-low) / 2;
            if(check(nums,k,mid)){
                ans = mid ;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};