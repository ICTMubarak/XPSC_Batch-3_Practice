#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int x; cin>>x;
        if(x==50) cout<<0<<'\n';
        else if(x<50){
            if((50-x)%2==0) cout<<(50-x)/2<<'\n';
            else{
                cout<<((50-x-1)/2+3)<<'\n';
            }
        }
        else{
            if((x-50)%3==0) cout<<(x-50)/3<<'\n';
            else{
                if((x+2-50)%3==0) cout<<(x+2-50)/3+1<<'\n';
                else cout<<(x+4-50)/3+2<<'\n';
            }
        }
    }

    return 0; 
}