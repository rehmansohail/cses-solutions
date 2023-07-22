#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s; cin>>s;
    int ans=INT_MIN;
    int temp=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])temp++;
        else{
            ans=max(ans,temp);
            temp=1;
        }
    }
 
    cout<<max(ans,temp);  //for case AAAA
 
    return 0;
}