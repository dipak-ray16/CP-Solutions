class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int l = 0 ; 
        int h = arr.size() - 1 ; 
        int indx =arr.size(); 
        while(l <= h){
            int mid = l + (h-l) / 2;
            if(arr[mid] >= target) {
               indx = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return indx;
    }
};
