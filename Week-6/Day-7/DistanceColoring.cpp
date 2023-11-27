#include<bits/stdc++.h>
using namespace std;

const int c = 1e9+7;

int main(){

    int t; cin>>t;

    while(t--){
        int N, K; cin>>N>>K;
        long long int ans=1;
        for(int i=0;i<N&&K>0;i++,K--){
            ans=(ans*K)%c;
        }
        cout<<ans<<'\n';
    }

    return 0;
}