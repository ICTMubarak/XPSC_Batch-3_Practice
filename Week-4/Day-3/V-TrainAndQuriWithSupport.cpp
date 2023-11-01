#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        map<int, vector<int>> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x].push_back(i);
        } 

        while(m--){
            int a,b; cin>>a>>b;
            if(mp[a].empty()||mp[b].empty()) cout<<"NO"<<'\n';
            else if(a==b) cout<<"YES"<<'\n';
            else if(mp[a].front()<mp[b].back()) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
            
    }
    }

    return 0;
}