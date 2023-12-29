#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        long long int s=0,sum=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
            s+=i;
        }
        cout<<sum<<" "<<s<<'\n';
        if((sum-s)%n==0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

    }

    return 0;
}