#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while (t--){
       int n; cin>>n;
       int arr[n];
       for(int i=0;i<n;i++) cin>>arr[i];
       sort(arr,arr+n);
       int ans=0;
       for(int sum=1;sum<=100;sum++){
        int cnt=0;
        for(int i=0,j=n-1; i<j;){
            if(arr[i]+arr[j]>sum) j--;
            else if(arr[i]+arr[j]<sum) i++;
            else {
                i++;
                j--;
                cnt++;
            }
        }

        ans=max(ans,cnt);

       }
       cout<<ans<<'\n';
    }
    


    return 0;
}