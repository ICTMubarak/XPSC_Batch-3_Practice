#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n==2){
            cout<<abs(arr[0]-arr[1])<<'\n';
            continue;
        }
        int ansIndx, ansVal;

        int valFast = abs(arr[0]-arr[1]);
        int valLst = abs(arr[n-1]-arr[n-2]);
        if(valFast>valLst) ansVal=valLst;
        else ansVal=valFast;

        for(int i=2;i<n-2;i++){
            int t=max(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
            ansVal=min(ansVal,t);
        }

        cout<<ansVal<<'\n';


    }


    return 0; 
}