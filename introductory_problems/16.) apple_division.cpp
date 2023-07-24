#include <bits/stdc++.h>
using namespace std;
#define int long long

void func(int i,vector<int> arr, unordered_set<int>& s,int temp){
    if(i==arr.size()){
        s.insert(temp);
        return;
    }
    temp+=arr[i];
    func(i+1,arr,s,temp);
    temp-=arr[i];
    func(i+1,arr,s,temp);
}

int32_t main(){
    unordered_set<int> s;
    int w=0;
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        w+=arr[i];
    }
    func(0,arr,s,0);
    int mn=INT_MAX;
    for(auto i=s.begin(); i!=s.end();i++)mn=min(mn,abs(w-2*(*i)));
    cout<<mn;
    

    return 0;
}