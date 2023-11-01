#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        while(m--){
            int a,b; cin>>a>>b;
            bool f=false;
            for(int i=0;i<n;i++){
                if(arr[i]==a){
                    int check=0;
                    for(int j=i;j<n;j++){
                        if(arr[j]==b){
                            f=true;
                            check=1;
                            break;
                        }
                    }
                    if(check==1) break;
                }
            }

            if(f) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }

    }

    return 0;
}