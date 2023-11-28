#include<bits/stdc++.h>
using namespace std;

int main(){

   long long int t;cin>>t;
    while(t--){
        long long int n,k;cin>>n>>k;

        long long int od;
        if(n%2==0) od=n/2;
        else od=(n+1)/2; 
       int  exTraOd=od-k;

       if(n<k*2) cout<<"NO"<<'\n';
       else if(n==k*2) cout<<"YES"<<'\n';
       else{
            if(exTraOd%2==0) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
       }
        
    }
    return 0;
}