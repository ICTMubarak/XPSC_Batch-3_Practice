#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;

    while (cin>>n>>m){
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        int l=0,r=INT_MAX, ans;

        while(l<=r){
            int cap = l+(r-l)/2;
            int container = 1, sum=0;
            for(int i=0;i<n;i++){

                if(arr[i]>cap){
                    container=INT_MAX;
                    break;
                }

                sum=sum+arr[i];
                if(sum>cap){
                    container++;
                    sum=arr[i];
                }
            }
            if(container<=m){
                ans=cap;
                r=cap-1;
            }
            else{
                l=cap+1;
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}