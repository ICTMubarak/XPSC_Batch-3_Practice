#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+5;

int tre[mx*3];

void build(int node, int l, int r,int a[]){
    //cout<<node<<" "<<l<<" "<<r<<'\n';

    if(l==r){
        tre[node] = a[r];
        return ;
    }
    
    int leftNode=node*2;
    int rightNode = leftNode+1;
    int mid = (l+r)/2;
    build(leftNode,l,mid,a);
    build(rightNode,mid+1,r,a);
    tre[node]=min(tre[leftNode],tre[rightNode]);
    
}

int query(int node, int l, int r, int x, int y){
    //case 1 puru node bad

    if(r<x || l>y) return mx;
//case 2 puru node nibo
    if(l>=x && r<=y){
        return tre[node];
    }
//case 3 majamaji obostha
    int leftNode = node*2;
    int rightNode = leftNode + 1;
    int mid = (l+r)/2;

  return min(query(leftNode,l,mid,x,y),query(rightNode,mid+1,r,x,y));

}

int main(){

    int t; cin>>t;

    for(int b=1; b<=t;b++){
        cout<<"Case "<<b<<":"<<'\n';
        int n,q; cin>>n>>q;
    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];
    build(1,0,n-1, a);

    while(q--){
        int x,y; cin>>x>>y;
        x--;
        y--;
        cout<<query(1,0,n-1,x,y)<<'\n';
    }
    }

    return 0;
}