#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        if(y<=x) cout<<y<<'\n';
        else cout <<x+(y-x)*2<<'\n';
    }

    return 0; 
}