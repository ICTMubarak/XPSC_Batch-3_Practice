#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int t;cin>>t;
    while(t--){
        int i,j; cin>>i>>j;
        int sum=0;
        for(i;i<=j;i++) sum+=arr[i];
        cout<<sum<<endl;
    }
    return 0;
}