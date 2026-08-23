class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // swaping first part;
        int n = arr.size();
        d %= n;
        for(int i = 0 ; i < d / 2; i++){
            swap(arr[i] , arr[d-i-1]);
        }
        
        // swaping thelast part
        for(int i = 0 ; i < (n - d) / 2 ; i++){
            swap(arr[d+i] , arr[n - i - 1]);
        }
        for(int i = 0 ; i < n / 2 ; i++){
            swap(arr[i] , arr[n - i  - 1]);
        }
        
        
    }
};