#include <bits/stdc++.h>
using namespace std;

int ans=0;
void func(char arr[][8],int i,vector<int>& col,vector<int>& rd,vector<int>& ld){
    if(i==8){
        ans++;
        return;
    }
    for(int j=0;j<8;j++){
        if(col[j]==0 && rd[i+j]==0 && ld[i-j+7]==0 && arr[i][j]=='.'){
            col[j]=1;
            rd[i+j]=1;
            ld[i-j+7]=1;
            func(arr,i+1,col,rd,ld);
            col[j]=0;
            rd[i+j]=0;
            ld[i-j+7]=0;
        }
    }
}

int main(){
    int n=8;
    char arr[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> col(n,0);
    vector<int> rd(2*n,0);
    vector<int> ld(2*n,0);
    func(arr,0,col,rd,ld);
    cout<<ans;

    return 0;
}