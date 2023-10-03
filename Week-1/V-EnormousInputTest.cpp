#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k,count=0; cin>>n>>k;
    while(n--){
        int x; cin>>x;
        if(x%k==0) count++;
    }
    cout<<count;
    return 0;
}