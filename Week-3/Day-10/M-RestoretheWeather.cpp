#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while (t--){
        int n, k; cin>>n>>k;
        vector<pair<int, int>> v1(n);

        for(int i=0;i<n;i++){
            cin>>v1[i].first;
            v1[i].second=i;
        }

        sort(v1.begin(),v1.end());

        vector<int> v2(n);

        for(int i=0;i<n;i++){
            cin>>v2[i];
        }

        sort(v2.begin(),v2.end());

        vector<int> ans(n);

        for(int i=0;i<n;i++){
            ans[v1[i].second]=v2[i];
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;




    }
    

    return 0; 
}