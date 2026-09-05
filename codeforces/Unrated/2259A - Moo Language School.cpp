#include<bits/stdc++.h>
using namespace std;
int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);

    int t;
    cin>>t;

while(t--){
    int n , x;
    cin>>n>>x;
    string s;
    cin>>s;
    int count = 0;
   int curcount = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '1'){ 
            curcount++;
        }
        if(curcount == x){
        count++;
        curcount = 0;
        }
    
    else if( (i + 1) % x  == 0 && curcount < x){
        curcount = 0;
    }
}
        
    cout<<count<<endl;
}
    return 0;
}