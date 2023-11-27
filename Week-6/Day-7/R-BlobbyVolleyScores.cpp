#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string str; cin>>str;
        int a=0,b=0;
        if(str[0]=='A') a++;

        for(int i=1;i<n;i++){
            if(str[i]=='A'&&str[i-1]=='A') a++;
            if(str[i]=='B'&&str[i-1]=='B') b++;
        }

        cout<<a<<" "<<b<<'\n';

    }




    return 0;
}