#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int x; cin>>x;
        if(x%10<5) cout<<(100-(x/10)*10)<<'\n';
        else cout<<(100-((x+10)/10)*10)<<'\n';
    }

    return 0; 
}