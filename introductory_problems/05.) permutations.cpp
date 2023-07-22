#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main(){
    int n; cin>>n;
    if(n==2||n==3)cout<<"NO SOLUTION";
    else{
        for(int i=1;i<=n/2;i++){
            arr[i]=2*i;
        }
        for(int i=1;i<=(n+1)/2;i++){
            arr[(n/2)+i]=2*i-1;
        }
    for(int i=1;i<=n;i++)cout<<arr[i]<<' ';
    }
    return 0;
}