#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;

    while(t--){
        int n,h,m;cin>>n>>h>>m;

        int slp=h*60+m;
        int up=24*60;
        for(int i=0;i<n;i++){
            int ah,am; cin>>ah>>am;
            int alm=ah*60+am;
            if(slp>alm){
                alm+=24*60;
            }
            up=min(alm-slp,up);
        }

        cout<<up/60<<" "<<up%60<<'\n';
    }


    return 0;
}