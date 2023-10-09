#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
//long long int sumArr[N][N],sortedSumArr[N][N];

map<pair<int,int>,long long int> mp1,mp2;

    
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

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    int arr[n], arrSorted[n];
    for(int i=0;i<n;i++) {
        int x; cin>>x;
        arr[i]=x;
        arrSorted[i]=x;
    }

     marge_sort(arrSorted,0,n-1);
    
     
     for(int k=0;k<n;k++){
        long long int sum=0;
        for(int i=k;i<n;i++){
        for(int j=i;j<n;j++){
            for(int z=i;z<=j;z++) sum=sum+arr[z];
            //sumArr[i][j]=sum;
            mp1[{i,j}]=sum;
            sum=0;
        }
    }
    
    }

     for(int k=0;k<n;k++){
        long long int sum=0;
        for(int i=k;i<n;i++){
        for(int j=i;j<n;j++){
            for(int z=i;z<=j;z++) sum=sum+arrSorted[z];
            //sortedSumArr[i][j]=sum;
            mp2[{i,j}]=sum;
            sum=0;
        }
    }
    
    }

   

int t; cin>>t;
//cout<<t;
while(t--){
    int check, l, r; cin>>check>>l>>r;
    
    if(check==1){
        cout<<mp1[{l-1,r-1}]<<endl;
        
    }
    else{
        cout<<mp2[{l-1,r-1}]<<endl;
        
    }

   // cout<<sum<<endl;
}
    
    return 0;
}