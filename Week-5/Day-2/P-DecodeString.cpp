#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n;cin>>n;
        string str; cin>>str;
        vector<char> v;

        for(int i=n-1;i>-1;i--){
            int x=0;
            char ch;
            if(str[i]=='0'){
                x=str[i-1]-'0'+(str[i-2]-'0')*10-1;
                ch=x+'a';
                i=i-2;
            }
            else{

                x=str[i]-'0'-1;
                ch=x+'a';
   
                
            }

            v.push_back(ch);

        }

        int l=v.size();
        for(int i=l-1;i>-1;i--) cout<<v[i];
        cout<<endl;

    }


    return 0;
}