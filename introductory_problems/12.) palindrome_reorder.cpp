#include <bits/stdc++.h>
using namespace std;


int main(){
    string s; cin>>s;
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++)m[s[i]]++;
    int odd_count=0;
    char odd_char;
    for(char c='A';c<='Z';c++){
        if(m[c]&1){
            odd_count++;
            odd_char=c;
        }
    }
    if(odd_count>1)cout<<"NO SOLUTION";
    else{
        string ans;
        for(char c='A';c<='Z';c++){
            if(m[c]%2==0){
                for(int i=0;i<m[c]/2;i++)ans.push_back(c);
            }
        }
        string temp = ans;
        reverse(temp.begin(),temp.end());
        if(odd_count==1){
            for(int i=0;i<m[odd_char];i++)ans.push_back(odd_char);
        }
        ans+=temp;
        cout<<ans;
    }

    return 0;
}