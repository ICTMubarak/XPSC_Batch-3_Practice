#include<bits/stdc++.h>
using namespace std;
int main(){
     int t; cin>>t;
    while(t--){
        
        int x,y; cin>>x>>y;
        int r=x-y;
        if(r<0) cout<<0<<'\n';
        else cout<<r<<'\n';
    }
    return 0; 
}