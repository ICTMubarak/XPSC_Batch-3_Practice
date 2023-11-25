#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){
        string str1,str2; cin>>str1>>str2;

        if(str2.length()==1&&str2[0]=='a'){
            cout<<1<<'\n';
            continue;
        }

        int countA=0;

        for(int i=0;i<str2.length();i++){
            if(str2[i]=='a') countA++;
        }
        if(countA>0){
            cout<<-1<<'\n';
            continue;
        }

        int p=str1.length();
        long long int ans=1;
        for(int i=0;i<p;i++) ans=ans*2;
        cout<<ans<<'\n';

        
    }

    return 0;
}