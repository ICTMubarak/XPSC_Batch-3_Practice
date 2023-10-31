#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int s;cin>>s;
        vector<int> v;
        int mx=9,sum=0;
        for(int i=1;i<=mx;i++){
            if(sum+i==s){
                v.push_back(i);
                break;
            }
            if(i==mx){
                sum=sum+i;
                v.push_back(i);
                mx=mx-1;
                i=0;
            }
        }
        stack<int> stk;
        for(auto val:v) stk.push(val);
        while(!stk.empty()){
            cout<<stk.top();
            stk.pop();
        }
        cout<<'\n';
    }

    return 0; 
}