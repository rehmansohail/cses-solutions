#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    vector<string> gray_code;
    gray_code.push_back("");     //add an empty string at the beginning
    for(int i=0;i<n;i++){
        int size=gray_code.size();
        for(int j=size-1;j>=0;j--){
            gray_code.push_back(gray_code[j]);
        }
        for(int j=0;j<size;j++)gray_code[j]+="0";
        for(int j=size;j<2*size;j++)gray_code[j]+="1";
    }
    for(int i=0;i<gray_code.size();i++)cout<<gray_code[i]<<'\n';

    return 0;
}