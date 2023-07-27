#include <bits/stdc++.h>
using namespace std;

#define int long long
int32_t main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int temp=0,ans=INT_MIN;
    for(int i=0;i<n;i++){
        temp+=arr[i];
        ans=max(temp,ans);
        if(temp<0){
            temp=0;
        }
    }
    if(temp!=0)ans=max(temp,ans);
    cout<<ans;

    return 0;
}