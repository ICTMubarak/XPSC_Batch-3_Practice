#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    vector<pair<string, string>> v;
    int cnt=0;
    while(t--){
        string str1,str2; cin>>str1>>str2;
        v.push_back({str1,str2});
    }

    sort(v.begin(),v.end());

    int sz = unique(v.begin(),v.end())-v.begin(); 

    cout<<sz<<'\n';

    // for(int i=0;i<sz;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<'\n';
    // }

    return 0;
}