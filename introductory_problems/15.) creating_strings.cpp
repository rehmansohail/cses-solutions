#include <bits/stdc++.h>
using namespace std;

void func(string& temp,vector<int>& mark,string s,set<string>& ans){
    if(temp.size()==s.size()){
        ans.insert(temp);
        return;
    }
    for(int i=0;i<s.size();i++){
        if(!mark[i]){
            mark[i]=1;
            temp.push_back(s[i]);
            func(temp,mark,s,ans);
            mark[i]=0;
            temp.pop_back();
        }
    }
}

int main(){
    string s; cin>>s;
    int n=s.size();
    vector<int> mark(n,0);
    set<string>ans;
    string temp;
    func(temp,mark,s,ans);
    cout<<ans.size()<<'\n';
    for(auto i=ans.begin(); i !=ans.end();i++)cout<<*i<<'\n';
    return 0;
}