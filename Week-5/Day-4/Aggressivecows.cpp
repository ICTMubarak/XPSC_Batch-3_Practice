#include<bits/stdc++.h>
using namespace std;

bool valideChck(int diff, int arr[], int n, int c){
    int count =1, last=0;
    for(int i=1;i<n;i++){
        if(abs(arr[i]-arr[last])>=diff){
            count++;
            last=i;
        }
    }
    return count>=c;
}

int main(){

    int t; cin>>t;

    while(t--){
        int n,c;cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int l=0;
        int r=INT_MAX;
        int ans;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(valideChck(mid,arr,n,c)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}