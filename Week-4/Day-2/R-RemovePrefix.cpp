#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        map<int, int> mp;
        for(int i=0;i<n;i++) cin>>arr[i];

        int f=0;
        for(int i=n-1;i>=0;i--){
            if(mp[arr[i]]>0){
                cout<<i+1<<'\n';
                f=1;
                break;
            }
            else mp[arr[i]]++;
        }
        if(f==0) cout<<0<<'\n';
    }

    return 0; 
}