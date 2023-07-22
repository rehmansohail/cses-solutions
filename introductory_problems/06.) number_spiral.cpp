#include <bits/stdc++.h>
using namespace std;



int main(){
    int t; cin>>t;
    while(t--){
        long long r,c; cin>>r>>c;
        long long ans;
        if(c>=r){
            if(c&1){
                ans=c*c-r+1;
            }
            else{
                ans=(c-1)*(c-1)+r;
            }
        }
        else{
            if(r&1){
                ans=(r-1)*(r-1)+c;
            }
            else{
                ans=r*r-c+1;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}