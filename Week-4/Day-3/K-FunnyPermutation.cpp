#include<bits/stdc++.h>
using namespace std;

bool descendingSort(int a, int b) {
    return a > b;
}

int main(){

    int t;cin>>t;

    while(t--){

        int n;cin>>n;
        if(n==1) cout<<1<<'\n';
        else if(n==2) cout<<2<<" "<<1<<'\n';
        else if(n==3) cout<<-1<<'\n';
        else if(n%2==1){
            
            for(int i=(n+1)/2;i<=n;i++){
                cout<<i<<" ";
            }
            for(int i=n/2;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<'\n';

        }
        else{
            for(int i=1;i<=n;i=i+2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<'\n';
        }

    }
    return 0;
}