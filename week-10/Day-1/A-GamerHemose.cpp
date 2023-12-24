#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n,h; cin>>n>>h;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        int fst=v[0], snd=v[1];
        if(fst>=h) cout<<1<<'\n';
        else if(fst+snd>=h) cout<<2<<'\n';
        else if(h%(fst+snd)==0) cout<<(h/(fst+snd))*2;
        else if((h%(fst+snd))-fst<=0){
            int ans=(h/(fst+snd))*2+1;
            cout<<ans<<'\n';  
        }      
        else{
            int ans=(h/(fst+snd))*2+2;
            cout<<ans<<'\n'; 
        }           
    }

    return 0;
}