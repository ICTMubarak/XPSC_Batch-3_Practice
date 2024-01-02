#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while (t--){
        int n,k; cin>>n>>k;

       int ita = n-1;
       int ml= k/ita;
       int ith = ita*ml;
       int ansTmp = n*ml;
       if(ith<k) cout<<ansTmp-(ith-k)<<'\n';
       else if(ith>k) cout<<ansTmp+(k-ith)<<'\n';
       else cout<<ansTmp-1<<'\n';

        
    }
    

    return 0;
}