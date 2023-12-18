#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        string str; cin>>str;

        str+='0';
        

        char ch=str[0];

        int cnt=1;
        string ans="";
        for(int i=1;i<=n;i++){
            if(ch==str[i]) {
                cnt++;
            }
            else{
                 
                if(cnt%2==0){
                    ans+=ch;
                    ans+=ch;
                }
                else ans+=ch;

                cnt=1;
                ch=str[i];

                cout<<ans;
                ans="";
            }

        }

        cout<<'\n';
    }

    return 0;
}