#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n;cin>>n;

        if(n%3==0){
            int a=n/3;
            int x=a+1;
            int b=a-1;
            cout<<a<<" "<<x<<" "<<b<<'\n';
        }
        else{
            if((n+1)%3==0){
                 int a=(n+1)/3;
                 int x=a+1;
                 int b=a-2;
                 cout<<a<<" "<<x<<" "<<b<<'\n';
            }
            else{
                int a=(n-1)/3;
                 int x=a+2;
                 int b=a-1;
                 cout<<a<<" "<<x<<" "<<b<<'\n';
            }
        }
    }

    return 0;
}