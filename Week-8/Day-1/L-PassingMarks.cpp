#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, x; cin>>n>>x;

        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        sort(v.rbegin(), v.rend());
        int t=0;
        for(auto val:v){
            t++;
            if(t==x){
                cout<<val-1<<'\n';
                break;
            }
           
        }
        
    }
    return 0;
}