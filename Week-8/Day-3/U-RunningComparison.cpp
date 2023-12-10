#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v1(n), v2(n);

        for(int i=0;i<n;i++) cin>>v1[i];
        for(int i=0;i<n;i++) cin>>v2[i];
        int ans=0;
        for(int i=0;i<n;i++){
            
             if(v1[i]>v2[i]*2) continue;
            else if(v2[i]>v1[i]*2) continue;
            else {
                ans++;
            }
        }
       cout<<ans<<'\n';
    }
}