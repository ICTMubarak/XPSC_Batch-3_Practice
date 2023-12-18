#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n,k; cin>>n>>k;
        string str; cin>>str;
        if(str[0]=='0'){
            str[0]='1';
            k--;
        }
       
            while(k--){
                str+='0';
            }
        

        cout<<str<<'\n';
    }
    

    return 0;
}