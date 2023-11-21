#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;

   while(t--){
     int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    int minVal=arr[0], minIndx=0,minDif=abs(arr[0]-arr[1]);

    for(int i=1;i<n;i++){
        if(minDif>abs(arr[i-1]-arr[i])){
            minIndx=i-1;
            minDif=abs(arr[i-1]-arr[i]);
        }
    }
    
    if(minIndx==0) cout<<abs(arr[0]-arr[1])<<'\n';
    else if(minIndx==n-1) cout<<abs(arr[n-1]-arr[n-2])<<'\n';
    else{
        int x = abs(arr[minIndx]-arr[minIndx-1]);
        int y = abs(arr[minIndx]-arr[minIndx+1]);
        if(y>x) cout<<y<<'\n';
        else cout<<x<<'\n';
    }
   }

    return 0;
}