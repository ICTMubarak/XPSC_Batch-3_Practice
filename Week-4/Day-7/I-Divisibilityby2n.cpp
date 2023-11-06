#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> v2;
bool compareDescending(int a, int b) {
    return a > b;
}
int main(){
    int t;cin>>t;
    while(t--){
       int n;cin>>n;
       vector<int> v(n+1);
       int ans=0, countN=n;
       for(int i=1;i<=n;i++){
            cin>>v[i];
            int tmp=v[i];
            while(tmp%2==0){
                tmp=tmp/2;
                countN--;
            }
       }
 
      
 
 
       if(countN<1) {
        cout<<0<<'\n';
        continue;
       }
       else{
 
         for(int i=1;i<=n;i++){
            v[i]=v[i]*i;
         }
 
         
 
         for(int i=1;i<=n;i++){
           // cout<<v[i]<<" ";
           int t=0;
           while(v[i]%2==0){
            v[i]=v[i]/2;
            t++;
           }
           v2.push_back(t);
         }
 
         sort(v2.begin(),v2.end(),compareDescending);
         int ans=0;
 
         for(auto vn:v2){
            //cout<<vn<<" ";
            countN=countN-vn;
            ans++;
            if(countN<1){
                cout<<ans<<'\n';
                break;
            }
         }
 
        
       }
 
       if(countN>0) cout<<-1<<'\n';
       v.clear();
       v2.clear();
 
    }
 
    return 0;
}