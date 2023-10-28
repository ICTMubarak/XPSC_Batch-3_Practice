#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){
        long long int x;
        cin>>x;
        //cout<<x<<endl;
        bool f=false;
        if(x<3) f=false;
        else if(x%2==1) f=true;
        else{
            for(long long int i=3;i<=x/2;i=i+2){
                if(x%i==0){
                    f=true;
                    break;
                }
            }
        }

        if(f) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        
    }

    return 0;
}