#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n%2==1) cout<<-1<<'\n';
        else{
            for(int i=n;i>0;i--) cout<<i<<" ";
            cout<<'\n';
        }
    }

    return 0; 
}