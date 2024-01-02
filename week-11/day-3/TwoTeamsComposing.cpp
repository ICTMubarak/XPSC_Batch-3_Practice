#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        vector<int> v(n);
        map<int, int> mp;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
            if(ans<mp[v[i]]) ans= mp[v[i]];
        } 
        sort(v.begin(),v.end());
        int sz= unique(v.begin(),v.end())-v.begin();
       

        if(ans==sz) cout<<ans-1<<'\n';
        else cout<<min(ans,sz)<<'\n';
        
    }
    

    return 0;
}