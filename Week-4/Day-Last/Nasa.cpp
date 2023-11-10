#include<bits/stdc++.h>
using namespace std;
long long int x;
unordered_map<int, int> pldmStor;

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

    for(int i=0;i<=32000;i++){
            if(pndm(i)){
                pldmStor[i]=1;
            }        
        }

    while(t--){
        int n; cin>>n;
        vector<long long int> v(n);
        for(int i=0;i<n;i++){
             cin>>v[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                x=v[i]^v[j];
                 if(pldmStor[x]==1){
                  ans++;  
                }
            } 
        }
        cout<<ans<<'\n';
    }
    return 0;
}