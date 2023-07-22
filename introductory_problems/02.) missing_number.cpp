#include <bits/stdc++.h>
using namespace std;
 
int arr[200001];
 
 
int main(){
    
    int n; cin>>n;
    for(int i=1;i<n;i++){
        int x; cin>>x;
        arr[x]=1;
    }
    for(int i=1;i<=n;i++){
        if(!arr[i]){
            cout<<i;
            break;
        }
    }
 
    return 0;
}