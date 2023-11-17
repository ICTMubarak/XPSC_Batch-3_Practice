#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n;cin>>n;
        int arr[n];
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 

        sort(arr,arr+n);
  
        int l=0,r=n;

        bool f=true;

        while(l<=r){
            int mid=l+(r-l)/2;
            double mul=1.00;
            for(int i=0;i<n;i++){
                mul=mul*((double)arr[i]/(double)arr[mid]);
            }
            if(mul==1.00){
                cout<<"YES"<<'\n';
                f=false;
                break;
            }
            else if(mul>1.00){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }

        if(f) cout<<"NO"<<'\n';


    }
    

    return 0;
}