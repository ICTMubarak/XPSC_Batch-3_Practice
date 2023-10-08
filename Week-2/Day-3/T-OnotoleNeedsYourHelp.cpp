#include<bits/stdc++.h>
using namespace std;
// int const N=1e9+1;
// long long int arr[N];
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t; cin>>t;
    map<int,int> mp;
    vector<int> v;
    while(t--){
        int x; cin>>x;
        v.push_back(x);
        mp[x]++;
    }

    for(auto val:v){
        if(mp[val]==1){
            cout<<val;
            break;
        }
    }

    

    

    return 0; 
}