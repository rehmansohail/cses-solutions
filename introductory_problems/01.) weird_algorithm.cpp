#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    long long n; cin>>n;
    while(1){
        cout<<n<<' ';
        if (n==1)break;
        else if(n&1)n=n*3+1;
        else n/=2;
    }
 
    return 0;
}