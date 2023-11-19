#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        string str;cin>>str;
        int x = ((str[0]-'a'))*25+(str[1]-'a');
        cout<<x<<'\n';
    }

    return 0;
}