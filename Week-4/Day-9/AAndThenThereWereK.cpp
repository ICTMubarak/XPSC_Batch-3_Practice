#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
       
        int x;
        for(int i=0;pow(2,i)<=n;i++){
             x=pow(2,i);
        }

        cout<<x-1<<'\n';
    }

    return 0;
}