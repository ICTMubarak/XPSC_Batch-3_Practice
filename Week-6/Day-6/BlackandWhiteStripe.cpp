#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while (t--){
        int n,k; cin>>n>>k;
        string str; cin>>str;
        int a[n];
        for(int i=0;i<n;i++){
            if(str[i]=='B') a[i]=1;
            else a[i]=0;
        }
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+a[i];
        }
        if(sum>=k){
            cout<<0<<'\n';
            continue;
        } 
        else{
            int tmp=sum;
            for(int i=k,j=0;i<n;i++,j++){
                sum=sum+a[i]-a[j];
                tmp=max(tmp,sum);
            }
            if(tmp>=k) cout<<0<<'\n';
            else cout<<k-tmp<<'\n';
        }
    }
    

    return 0; 
}