#include <bits/stdc++.h>
using namespace std;



int main(){
    int n; cin>>n;
    int ans=INT_MIN;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        v.push_back({a,0});
        v.push_back({b,1});
        
    }
    sort(v.begin(),v.end());
    int temp=0;
    for(int i=0;i<v.size();i++){
        if(v[i].second==0)temp+=1;
        else temp-=1;
        ans=max(ans,temp);
    }
    cout<<ans;

    return 0;
}