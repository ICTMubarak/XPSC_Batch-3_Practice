#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
        string str;
        unordered_set<string> st;
        stack<string> stk;

    while(t--){
        cin>>str;
        stk.push(str);
    }

    while(!stk.empty()){
        if(st.find(stk.top())==st.end()){
            string s = stk.top();
            cout<<s[s.length()-2]<<s[s.length()-1];
            st.insert(s);
        }
        stk.pop();
    }

    return 0;
}