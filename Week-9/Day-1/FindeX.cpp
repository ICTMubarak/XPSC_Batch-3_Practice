#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
   

    while(t--){
        long long int a,b,c,d; cin>>a>>b>>c>>d;
        if((a+1)%b==(c+1)%d) cout<<1<<'\n';
        else {
            long long int lcm= (b*d)/__gcd(b,d);
            long long int ans = lcm-a%b;
            cout<<ans<<'\n';
        }
        
    }

    return 0;
}