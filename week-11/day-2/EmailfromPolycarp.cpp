#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){

        string str1,str2; cin>>str1>>str2;
        if(str1.length()>str2.length()) cout<<"NO"<<'\n';
        else{
            stack<char> stk;
            for(int i=str2.length()-1;i>-1;i--) stk.push(str2[i]);
          
            for(int i=0;i<str2.length();i++){
                while(str2[i]==stk.top()){
                        stk.pop();
                }
            }
             if(stk.empty()) cout<<"YES"<<'\n';
              else cout<<"NO"<<'\n';
        }
            }

    return 0;
}