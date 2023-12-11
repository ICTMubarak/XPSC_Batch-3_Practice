#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--){
        long long int n; cin>>n;
        vector<long long int> v(n);
        for(long long int i=0;i<n;i++) cin>>v[i];

        sort(v.begin(),v.end());

        long long int x=1;
        for(int i=0;i<n-1;i++){
           
            if(v[i]==v[i+1]) continue;
            else if(v[i]+1==v[i+1]) x++;
            else break;
            
        }
        long long int ans = (x*2)%1000000007-1;
        cout<<ans<<'\n';
    }
    
    return 0;
}