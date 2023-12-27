#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    map<pair<string, string>, int> mp;
    int cnt=0;
    while(t--){
        string str1,str2; cin>>str1>>str2;
        mp[{str1,str2}]++;
        if(mp[{str1,str2}]==1){
            cnt++;
        } 
    }

    cout<<cnt;

    return 0;
}