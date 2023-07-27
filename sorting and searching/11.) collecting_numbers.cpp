#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    map<int,int> mp;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    vector<int> v;
    int ans=1;
    for(auto it= mp.begin();it !=mp.end();it++){
        v.push_back(it->second);
    }
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1])ans++;
    }
    cout<<ans;

    return 0;
}