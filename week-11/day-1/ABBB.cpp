#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while (t--){
        string str; cin>>str;
        int l=str.length();
        stack<char> st;
        for(int i=0;i<l;i++){
            if(st.empty()){
                st.push(str[i]);
            }
            else{
                if(str[i]=='B') st.pop();
                else st.push(str[i]);
            }
        }
       cout<<st.size()<<'\n';
    }
    


    return 0;
}