#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int ans=1,cntZro=0,cntOne=0;

        for(int i=0;i<n;i++){
            if(arr[i]==0){
                cntZro++;
                cntOne=0;
            }
            else{
                cntOne++;
                cntZro=0;
                ans++;
            }
            if(cntOne>1) ans+=4;
            if(cntZro>1){
                ans=-1;
                break;
            }
        }

        cout<<ans<<'\n';
        
        
    }

    return 0;
}