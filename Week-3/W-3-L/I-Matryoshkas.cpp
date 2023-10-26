#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        vector<int> v;
        map<int, int> mp;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
            mp[x]++;
        }

        sort(v.begin(),v.end());
        int ans=0;
        for(auto val:v){
            int checkVal=val;
            //cout<<mp[checkVal]<<" ";
            if(mp[checkVal]!=0){
                ans++;
                
                while(mp[checkVal]>0){
                        
                    mp[checkVal]--;
                    checkVal++;
                }
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}