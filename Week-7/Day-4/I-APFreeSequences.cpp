#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        bool f=true;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(arr[j]-arr[i]==arr[k]-arr[j]){
                        f=false;
                        break;
                    }
                }
            }
        }

        if(f) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    };



    return 0; 
}