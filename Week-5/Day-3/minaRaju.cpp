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


void fun(int arr[], int n, int f){
        int ans=-1,l=0,r=n-1,mid=l+(r-l)/2;

        while(l<=r){
            if(arr[mid]==f){
                ans=mid;
                r=mid-1;
            }
            else if(arr[mid]>f){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            mid=l+(r-l)/2;
        }
        
        if(ans==-1) cout<<f<<" not found"<<'\n';
        else cout<<f<<" found at "<<(ans+1)<<'\n';

}

int main(){

    int n,q;cin>>n>>q;
    int count=0;
     while(n!=0&&q!=0){
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        marge_sort(arr,0,n-1);

        count++;
        cout<<"CASE# "<<count<<":"<<'\n';
        while(q--){
            int f;cin>>f;
            fun(arr, n, f);
        }
        
        cin>>n>>q;
         
     }
    

    return 0;
}