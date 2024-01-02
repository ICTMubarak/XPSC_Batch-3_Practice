#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &p1, const pair<int, int> &p2 ){
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    else return 0;
}

int main(){

    int n, k; cin>>n>>k;
    vector<pair<int, int>> vp(n);

    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        vp[i]={x,y};
    }

    sort(vp.begin(),vp.end(),cmp);
    int cnt=0;
    for(auto val:vp){
        if(vp[k-1].first==val.first&&vp[k-1].second==val.second) cnt++;
    }

    cout<<cnt;

    return 0;
}