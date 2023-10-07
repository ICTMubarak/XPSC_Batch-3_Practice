#include<bits/stdc++.h>
using namespace std;
int main(){
    int K, S; cin>>K>>S;
    map<int, int> mp;

    for(int i=0; i<=K;i++){
        for(int j=0;j<=K;j++){
            mp[i+j]++;
            //cout<<i+j<<" ";
        }
    }

//cout<<endl;
    int ans = 0;

    for(int i=0;i<=K;i++){
        ans= ans+mp[S-i];
       // cout<<i<<" "<<mp[S-i]<<" "<<ans<<endl;

    }

    cout<<ans<<endl;
    return 0;
}