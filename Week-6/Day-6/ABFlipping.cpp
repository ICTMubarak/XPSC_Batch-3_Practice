#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string str; cin>>str;
        int ans=0;
        for(int i=n-1;i>=0;i--){

            if(str[i]=='A'||i==n-1){
                int tmp=0;
                for(int j=i-1;j<=0;j--){
                    tmp++;
                    if(str[i]=='A'){
                        ans=ans+tmp;
                        i=j-1;
                        break;
                    }
                }

            }
        }
        cout<<ans<<'\n';
    }



    return 0;
}