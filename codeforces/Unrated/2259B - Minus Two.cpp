#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ; cin>>t;
    while(t--){
        int n ; cin>>n;
        int even_half_even = 0 ;
        int even_half_odd = 0;
        int odd = 0;
        for(int i = 0 ; i < n ; i++){
            int x;
            cin>>x;
            if(x % 2 != 0  ){
                odd++;
            }
            else{
                x /= 2;
                if( x % 2 == 0) even_half_even++;
                else even_half_odd++;
            }
        }
        cout<<max({odd,even_half_even,even_half_odd})<<endl;
    }
    return 0;
}