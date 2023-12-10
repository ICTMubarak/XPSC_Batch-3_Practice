#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int h,x,y; cin>>h>>x>>y;
        int ans=0;
        if(h>0){
            ans++;
            h=h-y;
        }

        while(h>0){
            ans++;
            h=h-x;
        }
        cout<<ans<<'\n';
    }
}