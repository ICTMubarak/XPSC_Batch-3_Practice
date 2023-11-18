#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n;cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 
  
        int l=0,r=INT_MAX;

        bool f=false;

        while(l<=r){
            int mid=l+(r-l)/2;
            double mul=1.0;
            for(int i=0;i<n;i++){
                mul*= ((arr[i]*1.0)/mid);
            }
            if(fabs(mul-1.0)<1e-15){
                f=true;
                break;
            }
            else if(mul>1){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }



        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    

    return 0;
}