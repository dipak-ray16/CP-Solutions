class Solution {
  public:
    
       bool check(vector<int>&b , int k , int mid){
           int count = 1;
           int cursum = 0;
           for(auto x : b){
               if((x + cursum) > mid){
                   count++;
                   cursum = x;
                   if(count > k ) return false;
               }
               else{
                   cursum += x;
               }
           }
           return true;
       }
       int minTime(vector<int>&books , int k){
           int low = *max_element(books.begin(), books.end());
           int high =accumulate(books.begin(), books.end(), 0);
           int ans = high;
           while(low <= high){
               int mid = low + (high - low ) / 2;
               if(check(books,k ,mid) ){
                   ans = mid;
                   high = mid - 1;
               }
               else{
                   low = mid + 1;
               }
           }
           return ans;
       }
        
    
};