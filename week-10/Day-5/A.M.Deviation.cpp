#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long int a,b,c; cin>>a>>b>>c;
        if((a+b+c)%3==0) cout<<0<<'\n';
        //else if(((a+b+c)%4==0)||(a==b&&b==c&&c==a)) cout<<0<<'\n';
        else cout<<1<<'\n';
        
    }
    return 0;
}