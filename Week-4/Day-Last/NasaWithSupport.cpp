#include<bits/stdc++.h>
using namespace std;
vector<int> pldmStore;

void pldm(){
    int mx=1<<15;
    for(int i=0;i<mx;i++){
        string str = to_string(i);
        string rev_str=str;
        reverse(str.begin(),str.end());
        if(str==rev_str){
            pldmStore.push_back(i);
        }
    }
}


int main(){
    pldm();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
    vector<int> a(n);
    unordered_map<int,int> mp;

    long long int ans=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<pldmStore.size();j++){
            if((a[i]^pldmStore[j])<=a[i]) continue;
            if(mp.find(a[i]^pldmStore[j])!=mp.end()){
                ans = ans + mp[a[i]^pldmStore[j]];
            }
        }
    }
     for(auto it:mp){
            ans = ans+(long long)it.second*(it.second+1)/2;
        }
    cout<<ans<<'\n';
    }
    return 0;
}