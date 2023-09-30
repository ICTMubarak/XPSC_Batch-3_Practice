#include<bits/stdc++.h>
using namespace std;

int main(){

    int N; cin>>N;

    if(N>999) cout<<N;
    else if(N>99) cout<<0<<N;
    else if(N>9) cout<<0<<0<<N;
    else cout<<0<<0<<0<<N;

    return 0;
}