#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
       double n,m;cin>>n>>m;

       n=n-(n*0.1);
       
       
        if(n<m) cout<<"ONLINE"<<'\n';
       else if(n>m) cout<<"DINING"<<'\n';
       else cout<<"EITHER"<<'\n';
    }
    return 0; 
}