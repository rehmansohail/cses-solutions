#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    int current_end=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(current_end<=v[i].second){
            ans++;
            current_end=v[i].first;
        }
    }
    cout<<ans;
    

    return 0;
}