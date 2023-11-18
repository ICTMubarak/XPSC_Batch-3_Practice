#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n,m;cin>>n>>m;
    long long int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    long long int l=0, r=INT_MAX,ans;

    while(l<=r){
        long long int mid = l+(r-l)/2;
        long long int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid){
                sum=sum+(arr[i]-mid);
            }
        }
        if(sum>=m){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

    cout<<ans<<'\n';


    return 0; 
}