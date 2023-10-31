#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    
    while(t--){
        long long int sum=0,x;
        cin>>x;

        while(x>0){
            sum+=x;
            x=x/2;
        }
        cout<<sum<<'\n';       
    }

    return 0;
}