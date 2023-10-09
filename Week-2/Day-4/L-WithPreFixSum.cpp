#include<bits/stdc++.h>
using namespace std;
    
void marge(long long int a[], int l, int m, int r){

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

void marge_sort(long long int a[],int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        marge_sort(a,l,mid);
        marge_sort(a,mid+1,r);
        marge(a, l, mid, r);
    }
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    long long int arr[n+1], arrSorted[n+1];
    arr[0]=0;arrSorted[0]=0;
    for(int i=1;i<n+1;i++) {
        int x; cin>>x;
        arr[i]=x;
        arrSorted[i]=x;
    }

     marge_sort(arrSorted,1,n);
    
    for(int i=1;i<n+1;i++){
        arr[i]=arr[i]+arr[i-1];
        //cout<<arr[i]<<" ";
     }

     for(int i=1;i<n+1;i++){
        arrSorted[i]=arrSorted[i]+arrSorted[i-1];
        //cout<<arrSorted[i]<<" ";
     }

   

int t; cin>>t;

while(t--){
    int check, l, r; cin>>check>>l>>r;
    
    if(check==1){
        cout<<arr[r]-arr[l-1]<<endl;
        
    }
    else{
        cout<<arrSorted[r]-arrSorted[l-1]<<endl;
        
    }

}
    
    return 0;
}