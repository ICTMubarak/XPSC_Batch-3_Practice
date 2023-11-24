#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){

        string str;cin>>str;
        int l =str.length();
        if(l==1){
            cout<<1<<'\n';
            continue;
        }
        else{
            int f=l-1;
            for(int i=0;i<l;i++){
                if(str[i]=='0'){
                    f=i;
                    break;
                }
            }

            int ans=0;
            for(int i=f;i>=0;i--){
                ans++;
                if(str[i]=='1'){
                    break;
                }
            }

            cout<<ans<<'\n';
        }
    }

    return 0;
}