#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int x,n,l,r,k; cin>>n>>l>>r>>k;
    int ans=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=l&&x<=r){
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    for(auto val:v){
        if(k-val>=0){
                k-=val;
                ans++;
            }
            else break;
    }
    cout<<ans<<'\n';
    }
    
    return 0; 
}