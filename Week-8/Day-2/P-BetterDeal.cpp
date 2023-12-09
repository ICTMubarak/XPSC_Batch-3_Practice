#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int x,y; cin>>x>>y;
        
        if(100-x==200-2*y) cout<<"BOTH"<<'\n';
        else if(100-x>200-2*y) cout<<"SECOND"<<'\n';
        else cout<<"FIRST"<<'\n';
    }

    return 0;
}