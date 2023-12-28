#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,int> mp;
        int x,ans=1;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
            if(ans<mp[x]) ans=mp[x];
        }

        cout<<ans<<'\n';

    }

    return 0; 
}