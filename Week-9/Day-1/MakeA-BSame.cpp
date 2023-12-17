#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],b[n];
        bool one=false;
        int cntZero=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            one = one|a[i];
            if(a[i]==0) cntZero++;
        } 
        for(int i=0;i<n;i++) cin>>b[i];
        
        bool f=true;
        if(a[0]!=b[0]||a[n-1]!=b[n-1]) f=false;
        for(int j=1;j<n-1;j++){
            if(b[j]==a[j]) continue;
            if(b[j]==1&&one) continue;
            if(a[j]==1&&b[j]==0){
                f=false;
                break;
            }
            if(b[j]==0&&cntZero<3){
                f=false;
                break;
            }
            if(b[j]==1&&cntZero==n){
                f=false;
                break;
            }
        }

        if(f) cout<<"YES"<<'\n';

        else cout<<"NO"<<'\n';

        
    }
    return 0;
}