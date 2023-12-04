#include<bits/stdc++.h>
using namespace std;

int l(long long int a, long long int b){
    long long int g = __gcd(a,b);
    return (b/g)*a;
}

int main(){

    long long int n,a,b,p,q; cin>>n>>a>>b>>p>>q;

    long long int ans=0;

    ans = ans+(n/a)*p;
    ans = ans+(n/b)*q;

    long long int lcm = l(a,b);
    long long int dup;
    dup=n/lcm;
    ans=ans-(dup*(p+q));
    ans = ans+dup*(max(p,q));

    cout<<ans;


    return 0;
}