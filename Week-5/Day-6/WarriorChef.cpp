#include<bits/stdc++.h>
using namespace std; 

int main(){

    int t; cin>>t;

    while (t--){
        int n, h; cin>>n>>h;

        int arr[n];

        for(int i=0;i<n;i++) cin>>arr[i];

        int l=0,r=INT_MAX,ans;
        while(l<=r){
            int mid=l+(r-l)/2;
            int tmpH=h;
            //cout<<mid<<" "<<tmpH<<endl;
            for(int i=0;i<n;i++){
                if(arr[i]>mid){
                     tmpH=tmpH-arr[i];
                }
                if(tmpH<0){
                    l=mid+1;
                    break;
                }
            }

            if(tmpH>0){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<"\n";
    }
    

    return 0;
}