#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        int n;cin>>n;

        vector<long long int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }
       sort(v.rbegin(),v.rend());

       int ans=0;
        long long int x=0;
       for(auto val:v){
            if(x>=val){
                x=x^val;
            }
            else{
                x=val;
                ans++;
            }
       }
        cout<<ans<<'\n';
    }

    return 0;
}