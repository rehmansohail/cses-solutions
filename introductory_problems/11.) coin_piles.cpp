#include <bits/stdc++.h>
using namespace std;

#define int long long
int32_t main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        if((a+b)%3==0 && min(a,b)>= (a+b)/3)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }

    return 0;
}