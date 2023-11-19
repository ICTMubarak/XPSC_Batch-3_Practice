#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int a,b,c,x,y; cin>>a>>b>>c>>x>>y;
         int  dog = max(0, x-a);
         int  cat = max(0, y-b);
         if(c>=dog+cat) cout<<"YES"<<'\n';
         else cout<<"NO"<<'\n';
    }


    return 0;
}