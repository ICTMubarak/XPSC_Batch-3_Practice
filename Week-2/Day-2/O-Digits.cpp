#include<bits/stdc++.h>
using namespace std;
int main(){
    int S, K; cin>>S>>K;
    int count=0;
    while(S){
        S=S/K;
        count++;
    }
    cout<<count;
    return 0;
}