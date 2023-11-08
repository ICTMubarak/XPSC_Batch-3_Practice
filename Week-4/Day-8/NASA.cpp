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
        map<long long int, long long int> mp;
        int newN=0;
        for(int i=0;i<n;i++){
            long long int x; cin>>x;
            mp[x]++;
            if(find(v.begin(),v.end(),x)==v.end()){
                v[newN]=x;
                newN++;
            } 
        }
        int ans=0;
        for(int i=0;i<newN;i++){
            for(int j=i;j<newN;j++){
                long long int x= v[i]^v[j];
                if(pndm(x)){
                    ans = ans+mp[x];
                }
                
            }
        }

        cout<<ans<<'\n';

    }


    return 0;
}