#include<bits/stdc++.h>
using namespace std;


int main(){

    int t; cin>>t;
   
    
    while(t--){
            int n;cin>>n;
             map<int, int> mp;
            vector<int> v;
            for(int i=0;i<n;i++){
                int x; cin>>x;
                mp[x]++;
                
                if(find(v.begin(),v.end(),x)==(v.end())) v.push_back(x);
            }

             int count=0, zeroCount=0;
        for(auto val:v){
            if(mp[val]%2==0) zeroCount++;
            count=count+mp[val]%2;
            //cout<<mp[val]<<" ";
        }

        if(zeroCount==1) zeroCount=0;
        else if(zeroCount==2) zeroCount=2;
        else if(zeroCount==3) zeroCount=2;
        else{
            zeroCount = (zeroCount/2)*2;
        }
        
        cout<<count+zeroCount<<endl;
    }
       

    return 0;
}