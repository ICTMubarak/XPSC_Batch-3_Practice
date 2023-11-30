#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        int mx=INT_MIN;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>mx) mx=arr[i];
        }
        int sndMx=INT_MIN;

        for(int i=0;i<n;i++){
            if(arr[i]==mx) continue;
            if(arr[i]>sndMx) sndMx=arr[i];
        }

        cout<<mx+sndMx<<'\n';
    }
    return 0; 
}