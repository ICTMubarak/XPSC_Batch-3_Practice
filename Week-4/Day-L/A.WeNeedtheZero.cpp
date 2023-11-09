#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;

        int x=0;

        for(int i=0;i<n;i++){
            int a;cin>>a;
            x=x^a;
        }

        if(n%2==0){
            if(x==0) cout<<0<<'\n';
            else cout<<-1<<'\n';
        }
        else{
            cout<<x<<'\n';
        }

    }


    return 0;
}