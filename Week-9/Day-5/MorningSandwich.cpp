#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        int ans = min(a-1,b+c);
        ans = ans*2+1;
        cout<<ans<<'\n';
        
    }

    return 0; 
}