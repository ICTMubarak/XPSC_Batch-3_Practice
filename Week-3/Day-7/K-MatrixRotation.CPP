#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int a,b,c,d; cin>>a>>b>>c>>d;

        if(a<b&&a<c&&c<d&&b<d) cout<<"YES"<<endl;
        else if(c<a&&c<d&&a<b&&d<b) cout<<"YES"<<endl;
        else if(d<c&&d<b&&c<a&&b<a) cout<<"YES"<<endl;
        else if(b<d&&b<a&&d<c&&a<c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0; 
}