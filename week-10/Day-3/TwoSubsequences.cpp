#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
       string str; cin>>str;
       int l= str.length();
       char ch=str[0];
       int idx=0;
       for(int i=0;i<l;i++) {
        if(ch>str[i]){
            ch=str[i];
            idx=i;
        }
       }
       cout<<str[idx]<<" ";
       for(int i=0;i<l;i++){
        if(i==idx) continue;
        cout<<str[i];
       }
       cout<<'\n';
    }
    return 0;
}