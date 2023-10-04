#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int x,y,count=0; cin>>x>>y;

    while(x<=y){
        x=x+x;
        count++;
    }
    cout<<count;

    return 0;
}