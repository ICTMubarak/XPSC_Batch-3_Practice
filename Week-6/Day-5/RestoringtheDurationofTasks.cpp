#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        int a[n+1],b[n];
        
        for(int i=0;i<n;i++) cin>>a[i];
        a[n]=0;

        for(int i=0;i<n;i++) cin>>b[i];

        cout<<b[0]-a[0]<<" ";

        for(int i=1;i<n;i++) {
            int r=b[i]-a[i];
            if(a[i]<b[i-1]) r=r-(b[i-1]-a[i]);
            cout<<r<<" ";
        }

        cout<<'\n';

    }

    return 0;
}