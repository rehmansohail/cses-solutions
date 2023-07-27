#include <bits/stdc++.h>
using namespace std;

//for visualizing the solution refer to the python file of this question ('09.) stick_lengths.py')

#define int long long
int32_t main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int index=(n-1)/2,cost=0;
    for(int i=0;i<n;i++){
        cost+=(abs(arr[i]-arr[index]));
    }
    cout<<cost;

    return 0;
}