#include<bits/stdc++.h>
using namespace std;

int main(){
      ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;

    while (t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        string str; cin>>str;
        bool f=true;
        map<int, int> mp;
        map<int, char> mp1;

        for(int i=0;i<n;i++){
            if(mp[arr[i]]==0){
                mp1[arr[i]]=str[i];
            }
            else if(mp1[arr[i]]!=str[i]){
                f=false;
            }
            mp[arr[i]]++;
        }

        

        if(f) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

        
    }
    

return 0;
}