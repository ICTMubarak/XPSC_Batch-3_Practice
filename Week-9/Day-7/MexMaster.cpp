#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int cntZ=0, cntNZ=0;
        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0) cntZ++;
            else cntNZ++;
        }

        if(cntZ-1<=cntNZ||cntZ==0) cout<<0<<'\n';
        else if(cntZ==n) cout<<1<<'\n';
        else{
            sort(v.rbegin(),v.rend());
            int nvl=v[0];
            if(nvl>1) cout<<1<<'\n';
            else cout<<2<<'\n';
        }
    }

    return 0; 
}