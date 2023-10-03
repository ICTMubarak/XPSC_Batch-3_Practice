#include<bits/stdc++.h>
using namespace std;


void marge(int a[], int l, int m, int r){

    int leftSize = m-l+1;
    int rightSize = r-m;
    int L[leftSize], R[rightSize];
    int k=0;
    for(int i=l;i<=m;i++){
        L[k]=a[i];
        k++;
    }
    k=0;
    for(int i=m+1;i<=r;i++){
        R[k]=a[i];
        k++;
    }
   
   int i=0,j=0,cur=l;
   while(i<leftSize && j<rightSize){
    if(L[i]<=R[j]){
        a[cur] = L[i];
        i++;
    }
    else{
        a[cur]=R[j];
        j++;
    }
    cur++;
   }

   while(i<leftSize){
    a[cur]=L[i];
    cur++;
    i++;
   }

   while(j<rightSize){
    a[cur] = R[j];
    cur++;
    j++;
   }
}



void marge_sort(int a[],int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        marge_sort(a,l,mid);
        marge_sort(a,mid+1,r);

        marge(a, l, mid, r);

    }
}



int main(){

    int N;cin>>N;
    N--;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];


    marge_sort(arr,0,N-1);

    int last = 0; 
   for(int i = 0; i<N;i++){
    if(arr[i]!=i+1){
        cout<<i+1; 
        last = 1;
        break;
    }
   } 

    if(last==0) cout<<arr[N-1]+1;

    return 0;
}