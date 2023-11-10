#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,k; cin>>n>>m>>k;

    vector<int> v(m);

    for(int i=0;i<m;i++){
        cin>>v[i];
    }

    int foedor; cin>>foedor;

    int ans=0;

    for(auto val:v){

        int t=val^foedor;
        //cout<<t<<" "<<val<<" "<<foedor<<endl;
        int fstBit=1,kt=0;
        while(t){
            //cout<<t<<endl;
            if((t&fstBit)%2==1) kt++;
            t=t>>1;
        }
        if(kt<=k) ans++;
    }   

    cout<<ans;

    return 0;
}