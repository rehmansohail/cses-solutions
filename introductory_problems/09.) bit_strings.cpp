#include <bits/stdc++.h>
using namespace std;

const int m=1000000007;

#define int long long

int func(int n){
    if(n==0)return 1;
    if(n&1)return (2*func(n-1))%m;
    else return (func(n/2)*func(n/2))%m;
}

int32_t main(){
    int n; cin>>n;
    cout<<func(n);

    return 0;
}