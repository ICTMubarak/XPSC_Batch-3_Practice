#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--){
        int l,r,x,a,b,ans=0; cin>>l>>r>>x>>a>>b;

        if(a==b) ans=0;

        else if(abs(a-b)>=x) ans=1;
        else if((a-l)>=x && (b-l)>=x) ans=2;
        else if((r-a)>=x && (r-b)>=x) ans=2;
        else if((a-l)>=x && (r-b)>=x) ans=3; 
        else if((b-l)>=x && (r-a)>=x) ans=3;
        else ans=-1; 

        // else if((b-a>=x)||(b-a>=x)) ans=1;
        // else if(b>a&&r-b>=x) ans=2;
        // else if((a-l>=x&&r-b>=x)||(r-a>=x&&b-l>=x)) ans=3;
        // else ans=-1;

        cout<<ans<<'\n';
    }
    

    return 0;
}