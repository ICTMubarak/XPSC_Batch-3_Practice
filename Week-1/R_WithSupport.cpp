#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while(t--){
        int n, N=3;
        cin>>n;
        map<string, vector<int>> mp;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=n;j++){
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }

        vector<int> ans(N+1);
        for(auto it: mp){
            vector<int> value = it.second;
            if(value.size()==1)
            ans[value[0]]+=3;
            if(value.size()==2){
                ans[value[0]]++;
                ans[value[1]]++;
            }
        }
        cout<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<endl;
    }


    return 0;
}