#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int arrPreStore[11];
    arrPreStore[0]=1;
    for(int i=1;i<11;i++) arrPreStore[i]=arrPreStore[i-1]*10;
    //for(int i=0;i<11;i++) cout<<arrPreStore[i]<<" ";

    int t; cin>>t;
    while(t--){
        long long int m;cin>>m;

        for(int i=1;i<10;i++){
            if(arrPreStore[i]==m){
                cout<<0<<'\n';
                break;
            }
            else if(arrPreStore[i]>=m){
                cout<<m-arrPreStore[i-1]<<'\n';
                break;
            }
            else continue;
            
        }
    }


}