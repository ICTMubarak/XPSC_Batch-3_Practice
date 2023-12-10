#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        map<int, int> mp;
        int n; cin>>n;
        int mx=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
            mx=max(mx,mp[x]);
        }
        cout<<n-mx<<'\n';
    }
}