#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        bool f = ((a>b+c+d)||(b>a+c+d)||(c>b+a+d)||(d>b+c+a));
        if(f) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0; 
}