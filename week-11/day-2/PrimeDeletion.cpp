#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while (t--){
       string str; cin>>str;
       if(str[0]=='1') cout<<13<<'\n';
       else if(str[0]=='2') cout<<23<<'\n';
       else if(str[0]=='3') cout<<31<<'\n';
       else if(str[0]=='4') cout<<41<<'\n';
       else if(str[0]=='5') cout<<53<<'\n';
       else if(str[0]=='6') cout<<61<<'\n';
       else if(str[0]=='7') cout<<71<<'\n';
       else if(str[0]=='8') cout<<83<<'\n';
       else if(str[0]=='9') cout<<97<<'\n';
       else cout<<-1<<'\n';
    }
    

    return 0;
}