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
    tre[node]=tre[leftNode]+tre[rightNode];
}

int query(int node, int l, int r, int x, int y){
    //case 1 puru node bad

    if(r<x || l>y) return 0;
//case 2 puru node nibo
    if(l>=x && r<=y){
        return tre[node];
    }
//case 3 majamaji obostha
    int leftNode = node*2;
    int rightNode = leftNode + 1;
    int mid = (l+r)/2;
    return query(leftNode,l,mid,x,y) + query(rightNode,mid+1,r,x,y); 
}

void update(int node, int l, int r, int indx, int val){
    if(indx <l || indx>r) return;
    if(l==r && l==indx){
        tre[node]=val;
        return;
    }

    int leftNode = node*2;
    int rightNode = leftNode+1;
    int mid=(l+r)/2;
    update(leftNode,l,mid,indx,val);
    update(rightNode,mid+1,r,indx,val);
    tre[node] = tre[leftNode]+tre[rightNode];
}

int main(){

    int t; cin>>t;

    for(int cnt=1;cnt<=t;cnt++){
        cout<<"Case "<<cnt<<":"<<'\n';
        int n,q; cin>>n>>q;
    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];

    build(1,0,n-1, a);

    while(q--){

        int x;cin>>x;

        if(x==1){
            int idx; cin>>idx;
            cout<<a[idx]<<'\n';
            update(1,0,n-1,idx,0);
            a[idx]=0; // eta na dileo somossa nai, karon array te update korar proyujon nai, shudhu tree te update hobe.
        }
        else if(x==2){
            int idx,val; cin>>idx>>val;
            update(1,0,n-1,idx,a[idx]+val);
            a[idx]=a[idx]+val; // eta na dileo somossa nai, karon array te update korar proyujon nai, shudhu tree te update hobe.
        }

        else{
            int x,y; cin>>x>>y;
            cout<<query(1,0,n-1,x,y)<<'\n';
        }
        
    }
    }

    return 0;
}