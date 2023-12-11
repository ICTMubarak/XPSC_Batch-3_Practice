#include<bits/stdc++.h>
using namespace std;

long long int f(long long int n){
    if(n==0||n==1) return 1;
    return (n*f(n-1))%998244353; 
}
int main(){

    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%2==1) cout<<0<<'\n';
        else{
            long long int ans = (f(n/2)*f(n/2))%998244353;
            cout<<ans<<'\n';
        }
    }

    return 0; 
}