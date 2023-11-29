#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;

    while(t--){

        int n,k,l; cin>>n>>k>>l;
        bool f=false;
        vector<int> v;
        while(n--){
            int a,b; cin>>a>>b;

            if(b==l){
                 v.push_back(a);
                 f=true;
            }

        }

        sort(v.rbegin(),v.rend());
        
        if(f && v.size()>=k){
            int ans=0, t=0;
            for(auto val:v){
                ans=ans+val;
                t++;
                if(t==k) break;
            }
            cout<<ans<<'\n';
        }
        else cout<<-1<<'\n';

    }
    
    return 0;
}