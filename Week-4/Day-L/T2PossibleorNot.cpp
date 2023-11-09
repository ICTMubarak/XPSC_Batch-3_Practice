#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t; cin>>t;
    while(t--){
       long long int n,x,val;cin>>n>>x;

        long long int tmp=-1;
       for(long long int i=0;i<n;i++){
            cin>>val;
            if((val&x)==x){
                tmp = tmp&val;
            }
       }
       if(tmp==x) cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';

    }

    return 0;
}