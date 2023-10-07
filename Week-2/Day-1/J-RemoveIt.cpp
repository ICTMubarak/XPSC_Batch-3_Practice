#include<bits/stdc++.h>
using namespace std;

int main(){

    int N,X; cin>>N>>X;

    for(int i=0;i<N;i++){
        int val; cin>>val;
        if(val!=X) cout<<val<<" ";
    }

    return 0;
}
