#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){

        int n;cin>>n;
        string str;cin>>str;
        bool w=true;
        int t=0;
        while(w){
            w=false;
            n = str.length();
            for(int i=0;i<n-1;i++){
            if(str[i]!=str[i+1]){
                str.erase(i,2);
                w=true;
                t++;
                break;
            }
        }
        }

        if(t%2==0) cout<<"Ramos"<<'\n';
        else cout<<"Zlatan"<<'\n';
        
    }

    return 0;
}