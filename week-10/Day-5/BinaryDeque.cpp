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
            int i=0;
            while(arr[i]==1){
                ans++;
                sum--;
                if(sum==s){
                    cout<<ans<<'\n';
                    return 0;
                }
                i++;
            }
            int j=0;
            while(revArr[j]==1){
                ans++;
                sum--;
                if(sum==s){
                    cout<<ans<<'\n';
                    return 0;
                }
                j++;
            }

            } 
        }
        
        cout<<'\n';
        
    }

    return 0;
}