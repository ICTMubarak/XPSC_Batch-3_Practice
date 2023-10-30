#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while(t--){

        int n; cin>>n;
        if(n==1){
            int x; cin>>x;
            cout<<0<<'\n';
        }
        else{
            vector<int> v(n);
             for(int i=0;i<n;i++) cin>>v[i];
            sort(v.begin(),v.end());
            int sum=0;
            for(int i=0,j=n-1;i<=j;i++,j--){
                sum+=v[j]-v[i];
            }
            cout<<sum<<'\n';
        }
       
    }


    return 0;
}