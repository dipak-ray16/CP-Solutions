class Solution {
public:
    bool isPalindromic(string s) {
        string st ;
        for(int i = 0 ; i < s.size() ; i++){
            int n = s[i];
            int count = 0;
            while(count < 8){
                st += (n % 2);
                n /= 2;
                count++;
            }
        }
        reverse(st.begin() , st.end());
        int i = 0 ; int j = st.size() - 1;
        while(i < j){
            if(st[i] != st[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};