#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while (t--){
      long long  int n; cin>>n;
    //   if(n==0) {
    //     int x; cin>>x;
    //     cout<<0<<endl;
    //     continue;
    //   } 
        // long long int arr[n+1], mx=0, mxIndx=1;
        // for(int i=1;i<=n;i++){
        //     cin>>arr[i];
        //     if(mx<arr[i]){
        //         mx=arr[i];
        //         mxIndx=i;
        //     }
        // }
        // int a = arr[1]-1;
        // int b = mx-mxIndx;
        // cout<<max(a,b)<<endl;

        long long int arr[n+1],count=0;
        for(int i =1;i<=n;i++) cin>>arr[i];

        for(int i = 1,j=1;i<=n;i++,j++){
            //cout<<i<<endl;
            // while(arr[i]>j){
            //     j++;
            //     count++;
                
            // }

            if(arr[i]>j){
                count = count + arr[i]-j;
                j = j+arr[i]-j;
                
            }


        }

        cout<<count<<endl;

    }
    
    return 0;
}