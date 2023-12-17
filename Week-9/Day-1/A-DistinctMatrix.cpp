#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n<3){
            cout<<-1;
        } 
        else{
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n;j++){
                    if(j<=i) cout<<1;
                    else cout<<0;
                }
                cout<<'\n';
            }

            int f=-1;
        for(int k=0;k<n;k++){
            f=f*-1;
            if(f>0) cout<<1;
            else cout<<0;
        }

        }
        
        cout<<'\n';
    }

    return 0;
}