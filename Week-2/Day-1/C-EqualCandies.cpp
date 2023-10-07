#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;

    while(t--){
      //cout<<t;
      int n; cin>>n;

      int sum=0, min=INT_MAX;

      for(int i=0;i<n;i++){
        int x; cin>>x;
        sum=sum+x;
        if(min>x) min=x;
        //cout<<i<<endl;
      }

      cout<<(sum-min*n)<<endl;
    
    }

    return 0; 
}