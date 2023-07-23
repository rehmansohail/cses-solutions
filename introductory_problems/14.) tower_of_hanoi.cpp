#include <bits/stdc++.h>
using namespace std;


void func(int src,int dst,int via,int n){
    if(n==1){
        cout<<src<<' '<<dst<<'\n';     //in case of 1 plate just move it from src to dst
        return; 
    }
    func(src,via,dst,n-1);            //move n-1 plates from src to dst using via
    cout<<src<<' '<<dst<<'\n';        // move the last plate from src to dst
    func(via,dst,src,n-1);            //now moves those n-1 plates from via to dst using src
}

int main(){
    int n; cin>>n;
    cout<<int(pow(2,n)-1)<<'\n';        //total ways is 2^n-1 always
    func(1,3,2,n);

    return 0;
}