#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        if(2*x>y){
            cout<<y*2+x<<'\n';
        }
        else cout<<x*5<<'\n';
    }

    return 0; 
}