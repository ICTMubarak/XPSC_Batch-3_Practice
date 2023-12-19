#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t; cin>>t;
    while(t--){
        
        long long int n; cin>>n;
       // cout<<n;
       double sum=0, ans=0,x,tmp;
        for(int i=1;i<=n;i++){
            cin>>x;
            sum=sum+x;
            tmp=(sum*100)/i;
            //cout<<tmp<<" "<<sum<<'\n';
            if(tmp==100) ans++;
        }

        cout<<ans<<'\n';

    }
    return 0; 
}