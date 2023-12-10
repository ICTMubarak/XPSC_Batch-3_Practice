#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;

        if(abs(x-y)>=2){
            if(x>y) cout<<"CHEF";
            else cout<<"CHEFINA";
        }
        else{
            if(x==y){
                if(x%2==0) cout<<"CHEFINA";
                else cout<<"CHEF";
            }
            else{
                if(x>y){
                    if(x%2==0) cout<<"CHEF";
                    else cout<<"CHEFINA";
                }
                else{
                    if(y%2==0) cout<<"CHEF";
                    else cout<<"CHEFINA";
                }
            }
        }
        cout<<'\n';
    }

    return 0;
}