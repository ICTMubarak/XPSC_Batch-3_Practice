#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){

        int n;cin>>n;
        int a[n],b[n];
        bool ch=true;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]!=0) ch=false;
        } 
        if(ch){
            cout<<"YES"<<'\n';
            continue;
        }
        int d=0;
        for(int i=0;i<n;i++){
            if(b[i]!=0){
                d=a[i]-b[i];
                break;
            }
        }
        bool f=true;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                f=false;
                break;
            }
            if(n==1&&a[0]>=b[0]) break;
            a[i]=max((a[i]-d),0);
            if(a[i]!=b[i]){
                f=false;
                break;
            }
        }
        if(f) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }

    return 0;
}