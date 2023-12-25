#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){

        long long int a,b,c; cin>>a>>b>>c;
        if((a*1+b*2+c*3)%2==0) cout<<0<<'\n';
        else cout<<1<<'\n';
    }

    return 0;
}