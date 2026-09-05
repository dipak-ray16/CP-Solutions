class Solution {
public:
    void getSubsets(vector<int>& nums, vector<vector<int>>&ans,vector<int>store, int index){
        if(index == nums.size()){
            ans.push_back(store);
            return;
        }
        store.push_back(nums[index]);
        getSubsets(nums, ans, store, index+1);
        store.pop_back();
        getSubsets(nums, ans, store,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>store;
        int index = 0;
        getSubsets(nums, ans ,store, index);
        return ans;
    }
};