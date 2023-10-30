#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string str1,str2; cin>>str1>>str2;

        int l1=str1.length()-1, l2=str2.length()-1;


        if(str1[l1]==str2[l2]){
            if(str1[l1]=='S'){
                if(l1==l2) cout<<'='<<'\n';
                else if(l1>l2) cout<<'<'<<'\n';
                else cout<<'>'<<'\n';
            }
            else {
                if(l1==l2) cout<<'='<<'\n';
                else if(l1>l2) cout<<'>'<<'\n';
                else cout<<'<'<<'\n';
            }
        }
        else if(str1[l1]=='M'&&str2[l2]=='L') cout<<'<'<<'\n';
        else if(str1[l1]=='L'&&str2[l2]=='M') cout<<'>'<<'\n';
        else if(str1[l1]=='S'&&str2[l2]=='L') cout<<'<'<<'\n';
        else if(str1[l1]=='L'&&str2[l2]=='S') cout<<'>'<<'\n';
        else if(str1[l1]=='S'&&str2[l2]=='M') cout<<'<'<<'\n';
        else if(str1[l1]=='M'&&str2[l2]=='S') cout<<'>'<<'\n';

    }
    return 0;
}