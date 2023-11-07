#include<bits/stdc++.h>
using namespace std;

int pndm(int x){

    string str = to_string(x);

    int l=str.length();
    for(int i=0,j=l-1;i<=j;i++,j--){
        if(str[i]!=str[j]){
            return 0;
        }
    }
    return 1;
}

int main(){

    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                long long int x= v[i]^v[j];
                ans = ans+pndm(x);
            }
        }

        cout<<ans<<'\n';

    }


    return 0;
}