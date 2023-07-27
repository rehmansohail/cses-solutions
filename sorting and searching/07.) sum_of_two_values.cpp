#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,x; cin>>n>>x;
    int arr[n];
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mn=min(mn,arr[i]);
    }
    if(mn>=x){
        cout<<"IMPOSSIBLE";
    }
    else{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]=i;
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(mp.count(x-arr[i]) && (i!=mp[x-arr[i]])){
            cout<<i+1<<' '<<mp[x-arr[i]]+1;
            flag=false;
            break;
        }
    }
    if(flag)cout<<"IMPOSSIBLE";
    }

    return 0;
}