#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;cin>>t;
    while (t--){
        int m, s,mx=0; cin>>m>>s;
        vector<int> v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
            if(v[i]>mx) mx=v[i];
        }
 
        int sum=0,allsum=0;
        bool f=false;
        for(int i=1;i;i++){
            if(find(v.begin(),v.end(),i)==v.end()){
                sum+=i;
            }
            //cout<<sum<<" ";
            if(sum==s&&i>=mx){
                f=true;
                break;
            }

            if(sum>s){
                f=false;
                break;
            }

        }
 
     if(f) cout<<"YES"<<'\n';
     else cout<<"NO"<<'\n';
 
    }
    
 
    return 0; 
}