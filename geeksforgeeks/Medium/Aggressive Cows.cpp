class Solution {
	public:
	bool check(vector<int>&arr , int mid , int k){
	    int count = 1 ;
	    int lastplace = arr[0];
	    for(int i = 1 ; i < arr.size() ; i++){
	        if(arr[i] - lastplace >= mid){
	            count += 1;
	            lastplace = arr[i];
	        }
	    }
	    return count >= k;
	}
	int aggressiveCows(vector<int> &arr, int k) {
	    sort(arr.begin() , arr.end());
	    int ans = 1;
		int low = 1; 
		int high = arr[arr.size() - 1] ;
		while(low <= high){
		    int mid = low + (high-low) / 2;
		    if(check(arr , mid , k)){
		        ans = mid;
		        low = mid + 1;
		    }
		    else{
		        high = mid - 1;
		    }
		}
		return ans;
		
	}
};
