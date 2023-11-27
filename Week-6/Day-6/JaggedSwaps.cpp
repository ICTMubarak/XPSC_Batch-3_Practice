#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
    int n; cin>>n;
    int arr[n];
    map<int, int> mp;

    bool f = true;

    cin>>arr[0];
    if(arr[0]!=1) f=false;
    mp[arr[0]]++;

    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]>n) f=false;
        mp[arr[i]]++;
        if(mp[arr[i]]>1) f=false;
    }

    if(f) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    }



    return 0;
}