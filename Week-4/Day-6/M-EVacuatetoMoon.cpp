#include<bits/stdc++.h>
using namespace std;

bool compareDescending(int a, int b) {
    return a > b;
}

int main(){

    int t; cin>>t;
    while(t--){
        int n,m,h; cin>>n>>m>>h;
        vector<long long int> vN(n);
        vector<long long int> vM(m);

       
        for(int i=0;i<n;i++) cin>>vN[i];
        sort(vN.begin(),vN.end(),compareDescending);
        //cout<<vN[0]<<" "<<vN[1]<<endl;
        for(int i=0;i<m;i++) cin>>vM[i];
        sort(vM.begin(),vM.end(),compareDescending);

        int x = min(n,m);

        long long int ans=0;
        for(int i=0;i<x;i++){
            ans+=min(h*vM[i],vN[i]);
        }
        cout<<ans<<'\n';

    }

    return 0; 
}