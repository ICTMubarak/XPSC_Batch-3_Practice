#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    map<string, int> mp;
    int x=0;
    for(char ch1='a';ch1<='z';ch1++){
        for(char ch2='a';ch2<='z';ch2++){

            if(ch1==ch2) continue;
            x++;
            string st;
            st.insert(0,1,ch1);
            st.insert(1,1,ch2);
            mp[st]=x;
        }
    }

    while(t--){
        string str;cin>>str;
        cout<<mp[str]<<'\n';
    }

    return 0;
}