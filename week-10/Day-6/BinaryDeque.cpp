#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n,s; cin>>n>>s;
        int arr[n],revArr[n],sum=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            revArr[i]=arr[i];
            sum+=arr[i];
        }

        reverse(revArr,revArr+n);

        int ans=0;
        if(sum<s) cout<<-1<<'\n';
        else if(sum==s) cout<<0<<'\n';
        else {
            
            int i=0,j=0,sum=0,mx=0;

    while(j<n){
        sum+=arr[j];
        while (sum>s){
            sum-=arr[i];
            i++;
        }
        if(sum==s){
            mx=max(mx,j-i+1);
        }
        j++; 
    }
    cout<<n-mx<<'\n';

        } 
        
        
    }

    return 0;
}