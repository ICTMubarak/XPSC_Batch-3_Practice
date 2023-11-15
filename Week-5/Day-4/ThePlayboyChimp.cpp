#include<bits/stdc++.h>
using namespace std;

void binarySearch(int n, int x, vector<int> v){
    auto u = upper_bound(v.begin(),v.end(),x);
    auto l = lower_bound(v.begin(),v.end(),x)-1;
    int checkU=u-v.begin();
    int checkL=l-v.begin();

    //cout<<checkL<<" "<<checkU<<endl;
    
     if(checkL>-1&&checkL<n) cout<<*l<<" ";
     else cout<<"X"<<" ";

     if(checkU>-1&&checkU<n) cout<<*u<<'\n';
     else cout<<"X"<<'\n';
    
    
}

int main(){

    int n;cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());
    
    int q; cin>>q;

    while(q--){
        int x;cin>>x;
        binarySearch(n, x, v);
    }

    
    

    return 0; 
}