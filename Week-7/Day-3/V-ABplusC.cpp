#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        long long int x;cin>>x;
        if(x==1) cout<<-1<<'\n';
        else if(x<=1000000) cout<<1<<" "<<1<<" "<<x-1<<'\n';
        else{
          if(x%1000000==0) cout<<(x/1000000)-1<<" "<<1000000<<" "<<1000000<<'\n';
          else cout<<x/1000000<<" "<<1000000<<" "<<x%1000000<<'\n';

        }
    }

    return 0; 
}