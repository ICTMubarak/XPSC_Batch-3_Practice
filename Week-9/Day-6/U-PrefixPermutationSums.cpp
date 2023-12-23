#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n-1);
        for(int i=0;i<n-1;i++){
            if(i==0) cin>>v[i];
            else{
                int x; cin>>x;
                v[i]=x-v[i-1];
            }
        }
        sort(v.begin(),v.end());

        for(auto val:v) cout<<val<<" ";
        cout<<'\n';

        int cntDiffOne=0, cntDiffTwo=0,cntDifMore=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]-v[i]==1) cntDiffOne++;
            else if(v[i+1]-v[i]==2) cntDiffTwo++;
            else cntDifMore++;
        }
        
    }
    return 0;
}