#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n,k; cin>>n>>k;
        string str; cin>>str;
        map<char,int> mp;

        for(int i=0;i<n;i++){
            mp[str[i]]++;
        }

        int count=0,remain=0;
        for(int i=97,j=65;i<123;i++,j++){
            char ch1=i,ch2=j;
            count+=min(mp[ch1],mp[ch2]);
            remain+=(max(mp[ch1],mp[ch2])-min(mp[ch1],mp[ch2]))/2;
        }

        count+=min(k,remain);

        cout<<count<<endl;


    }

    return 0;
}