#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int a, b, c; cin>>a>>b>>c;
        if(a==1) {
        cout<<1<<'\n'; 
        continue;

        }
        if(b>=c){
             if(a==b) cout<<3<<'\n';
             else if(b>a) cout<<1<<'\n';
             else cout<<2<<'\n';
        }

        else{
              if((a-1)==((c-1)+(c-b))) cout<<3<<'\n';
              else if((a-1)<((c-1)+(c-b))) cout<<1<<'\n';
              else cout<<2<<'\n';
        }


    }


    return 0;
}