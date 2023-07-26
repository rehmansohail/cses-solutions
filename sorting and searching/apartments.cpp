#include <bits/stdc++.h>
using namespace std;

#define int long long
int32_t main(){
    int n,m,k; cin>>n>>m>>k;
    int ans=0;
    int pref[n];
    for(int i=0;i<n;i++)cin>>pref[i];
    int apart[m];
    for(int i=0;i<m;i++)cin>>apart[i];
    int i=0,j=0;
    sort(pref,pref+n);
    sort(apart,apart+m);
    while(i<n && j<m){
        if(apart[j]<pref[i]-k)j++;
        else if(apart[j]>pref[i]+k)i++;
        else{
            ans++;
            i++;
            j++;
        }
    }
    cout<<ans;

    return 0;
}