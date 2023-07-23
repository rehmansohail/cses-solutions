#include <bits/stdc++.h>
using namespace std;
 
#define int long long
void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
}
int32_t main(){
    int n; cin>>n;
    vector<int> arr(n,0);
    int s = ((n+1)*n)/2;
    vector<int> v1,v2;
    if(s&1)cout<<"NO";
    else{
        cout<<"YES"<<'\n';
        int s1=s/2;
        for(int i=n;i>=1;i--){
            if(s1-i>=0){
                v1.push_back(i);
                arr[i]=1;
                s1-=i;
            }
        }
        for(int i=1;i<=n;i++){
            if(!arr[i])v2.push_back(i);
        }
        cout<<v1.size()<<'\n';
        print(v1);
        cout<<'\n';
        cout<<v2.size();
        cout<<'\n';
        print(v2);
 
        
    }    
 
    return 0;
}