#include<bits/stdc++.h>
using namespace std;

const long long int N=2e5+1;
bool visit[N];
vector<long long int> g[N];
vector<long long int> cd(N);
 
 long long int dfs(long long int x){
visit[x]=true;
 int count=0;
  bool flg=true;
    for(auto y: g[x]){
    if(!visit[y]){
      flg=false;
      cd[x]+=dfs(y);
      count++;
    }
  }
  if(flg){
    cd[x]+=1;
    return cd[x];
  }
  else{
  return cd[x];
  }
}
 
 
int main() {
  
int t; cin>>t;

  while (t--){

    int  n; cin>>n;
    for(int i=1;i<=n;i++){
    visit[i]=false;
    g[i].clear();
    cd[i]=0;
  }

  for(int i=0;i<n-1;i++){
     long long int  x,y; cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
  }

long long int  x=dfs(1);
 
int  q; cin>>q;

while(q--){
 int x,y; cin>>x>>y;
  long long int  ans=cd[x]*cd[y];
  cout<<ans<<endl;
}

  }
  return 0;
}