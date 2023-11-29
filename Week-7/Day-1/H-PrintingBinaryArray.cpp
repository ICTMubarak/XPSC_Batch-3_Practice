#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x==0) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<'\n';
    }

    return 0;
}