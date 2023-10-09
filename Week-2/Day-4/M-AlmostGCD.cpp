#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    int arr[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]>mx) mx=arr[i];
    }
    int countMx=0, mxNumber=0;
    for(int i =2;i<=mx;i++){
        int count=0, allMostGCD;
        for(int j=0;j<n;j++){
            if(arr[j]%i==0) count++;
        }
        if(count>countMx){
            countMx=count;
            mxNumber=i;
        }
    }
    cout<<mxNumber;

    return 0; 
}