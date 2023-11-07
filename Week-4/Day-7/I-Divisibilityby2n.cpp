#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;cin>>t;

  while(t--){
    int n;cin>>n;
    vector<int> v;
    int divCount=0;

    for(int i=1;i<=n;i++){
      int x;cin>>x;
      while(x%2==0){
        x=x/2;
        divCount++;
      }

      int mulDivCount=0;
      int y = i;
      while(y%2==0){
        y=y/2;
        mulDivCount++;
      }

      v.push_back(mulDivCount);
    }

    if(divCount>=n) cout<<0<<'\n';

    else{
      sort(v.rbegin(),v.rend());
      int ans=0;
      for(auto val:v){
        divCount=divCount+val;
        ans++;
        if(divCount>=n){
          cout<<ans<<'\n';
          break;
        }
      }
      
    }
   if(divCount<n) cout<<-1<<'\n';
  }

  return 0;
}