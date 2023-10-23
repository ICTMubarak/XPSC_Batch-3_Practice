#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while (t--){
        int n; cin>>n;
        map<char, int> mp1,mp2;
        map<string, int> mp;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp1[v[i][0]]++;
            mp1[v[i][1]]++;
            mp[v[i]]++;
        }

        int count=0;

        for(int i=0;i<n;i++){
            int x=max(0,mp1[v[i][0]]-mp[v[i]]);
            count = count + x;

            int x=max(0,mp2[v[i][1]]-mp[v[i]]);
            count = count + x;

            if(mp1[v[i][0]]>0) mp1[v[i][0]]--;
            if(mp2[v[i][1]]>0) mp2[v[i][1]]--;
            if(mp[v[i]]>0) mp[v[i]]--;
        }
        cout<<count<<endl;
    }
    

    return 0; 
}