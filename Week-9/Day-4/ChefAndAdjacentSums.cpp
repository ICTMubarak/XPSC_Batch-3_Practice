#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        long long int sum= v[n-1]+v[n-2];
        bool f= true;
        for(int i=0,j=n-1; i<j;i++,j--){
            if((v[i]+v[j])>=sum){
                f=false;
                break;
            }
        }

        if(f) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

    }


    return 0; 
}